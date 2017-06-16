#include <stdio.h>
#include <stdarg.h>
#include <typeinfo.h>

void printf_va_arg(int n, ...){
	
	int t;
	va_list ap;
	va_start(ap, n);
	for (int i = 0; i < n; ++i){
		t = va_arg(ap, int);
		printf("%d", t);
	}
}

int main(void){
	int i = 0;
	if (typeid(i).name() == typeid(int).name()){
		printf("yes\n");
	}
	printf_va_arg(5, 1, 2, 3, 4, 5);
	printf_va_arg(8, 1, 2, 3, 4, 5,6,7,8);
	return 0;
}
