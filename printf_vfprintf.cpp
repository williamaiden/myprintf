#include <stdarg.h>
#include <stdio.h>

void myprintf(const char* str, ...){
	va_list ap;
	va_start(ap, str);
	vfprintf(stderr, str, ap);
	va_end(ap);
}

int main(){
	myprintf("%d,%s,%s,%d\n", 6, "William", "Aiden", 5);
	return 0;
}
