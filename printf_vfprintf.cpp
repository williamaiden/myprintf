#include <stdarg.h>
#include <stdio.h>

void printf_vfprintf(const char* str, ...){
	va_list ap;
	va_start(ap, str);
	vfprintf(stderr, str, ap);
	va_end(ap);
}

int main(){
	printf_vfprintf("%d,%s,%s,%d\n", 6, "William", "Aiden", 5);
	return 0;
}
