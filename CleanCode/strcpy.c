#include <stdio.h> 

void mystrcpy(char *t, char *s) {
	while(*t++ = *s++);
}

int main() {
	char t[20];
	mystrcpy(t, "sometext");
	printf(t);
}
