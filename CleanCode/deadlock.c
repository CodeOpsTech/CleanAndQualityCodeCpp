#include <pthread.h>

pthread_mutex_t resource1 = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t resource2 = PTHREAD_MUTEX_INITIALIZER;

void *sequence1(void *arg) {
	pthread_mutex_lock(&resource1);
	pthread_mutex_lock(&resource2);
	pthread_mutex_unlock(&resource2);
	pthread_mutex_unlock(&resource1);
	return 0; 
}

void* sequence2(void *arg) {
	pthread_mutex_lock(&resource2);
	pthread_mutex_lock(&resource1);
	pthread_mutex_unlock(&resource1);
	pthread_mutex_unlock(&resource2);
	return 0;
}

int main() {
	pthread_t thread1, thread2;
	
	pthread_create(&thread1, NULL, sequence1, NULL);	
	pthread_create(&thread2, NULL, sequence2, NULL);

	pthread_join(thread1, NULL);
	pthread_join(thread2, NULL);
}

