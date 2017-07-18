// based on https://www.cert.org/downloads/secure-coding/assets/sei-cert-cpp-coding-standard-2016-v01.pdf
#include <cstdarg>
#include <cstdio> 

int add(int first, int second, ...) {
 int r = first + second;
 va_list va;
 va_start(va, second);
 while (int v = va_arg(va, int)) {
 r += v;
 }
 va_end(va);
 return r;
}

int main() {
	printf("%d", add(10, 20, 30, 40));
} 
