#define _CRT_SECURE_NO_WARNINGS
//#define
#include <stdio.h>
#include <locale.h>
#include <math.h>

/*
int main(){ //����� � 8-������ ������� ��������� _ 10 ������� ���������
	float PI=3.14159,*p1,*p2;
	p1=p2=&PI;
	printf("�� ������ p1=%p �������� *p1=%g\n",p1,*p1);
	printf("�� ������ p2=%p �������� *p2=%g\n",p2,*p2);
}
*/

main() {

	//int* pi, i = 5;
	//float* pf, f = 2.1f;
	//printf("%lu\n", sizeof(pi));
	//printf("%lu\n", sizeof(pf));

	int* p�, x = 5;
	p� = &x;
	printf("�� ������ %p �������� *ptr=%g\n", pa, *pa);
	p�++;
	printf("�� ������ %p �������� *ptr=%g\n", pa, *pa);
	p�--;
	printf("�� ������ %p �������� *ptr=%g\n", pa, *pa);
	
}
