#define _CRT_SECURE_NO_WARNINGS
//#define
#include <stdio.h>
#include <locale.h>
#include <math.h>

/*
int main(){ //Вывод в 8-ричной системе счисления _ 10 системе счисления
	float PI=3.14159,*p1,*p2;
	p1=p2=&PI;
	printf("По адресу p1=%p хранится *p1=%g\n",p1,*p1);
	printf("По адресу p2=%p хранится *p2=%g\n",p2,*p2);
}
*/

main() {

	//int* pi, i = 5;
	//float* pf, f = 2.1f;
	//printf("%lu\n", sizeof(pi));
	//printf("%lu\n", sizeof(pf));

	int* pа, x = 5;
	pа = &x;
	printf("По адресу %p хранится *ptr=%g\n", pa, *pa);
	pа++;
	printf("По адресу %p хранится *ptr=%g\n", pa, *pa);
	pа--;
	printf("По адресу %p хранится *ptr=%g\n", pa, *pa);
	
}
