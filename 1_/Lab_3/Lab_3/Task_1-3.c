#include <stdio.h>
#include <locale.h>
#include <math.h>
#define D 2.54
#define P 2.32166
#define S 2.7076

T1(){

	//���������� ��� Task 1

	int num;
	int nu;
	int numb;
	int nub;
	int mns;
	int nns;
	int pr;
	int prr;
	float Dl;
	float Dlo;

	printf("��������� ����� ������ ���� ����� ������");

	//����_�����

	printf("\n������� ����� ");
	scanf(" %d %d",&num, &nu);
	printf("���� ������� ����� %d � %d",num, nu);
	getchar();
	
	//���� ����� ����� �����

	printf("\n������� ����� ��� �� ������������ ");
	scanf(" %d %d", &numb, &nub);
	printf("\n����� ����� ����� %d", numb + nub);
	getchar();

	//���� ������ �������� �����
	
	printf("\n������� ����� ��� �� �������� ");
	scanf(" %d %d", &mns, &nns);
	printf("\n�������� ����� ����� %d", mns-nns);
	getchar();

	//���� ����� ������������ �����

	printf("\n������� ����� ��� �� ������������ ");
	scanf(" %d %d", &pr, &prr);
	printf("\n������������ ����� ����� %d", pr*prr);
	getchar();

	//���� ����� ��������� ����� � ��������

	printf("\n������� ����� ��� ������� � �������� ");
	scanf(" %d %d", &Dl, &Dlo);
	printf("\n������� ����� %.0f ������� �� ������� %.2f", Dl/Dlo,Dl/Dlo);
	getchar();

}

T2(){

	int dym;
	int pulugda;
	int starolytovsky;
	float result;
	int var;

	puts("������� ����������� ������ ��� �������� � ����������");
	scanf("%d",&dym);
	result = D * dym;
	printf(" %d ������ - ��� %.1f �� ", dym, result);
	getchar();

	/*puts("������� ����������� �������� ��� �������� � �� � ����������");
	scanf("%d", &pulugda);
	result = P * pulugda;
	printf(" %d �������� - ��� %.1f �� ", pulugda, result);
	getchar();*/

	/*puts("������� ����������� ������ �������������� ������� ��������� ��� �������� �� � ����������");
	scanf("%d", &starolytovsky);
	result = S * starolytovsky;
	printf(" %d ����������� ������ �������������� ������� ��������� - ��� %.1f �� ", starolytovsky, result);
	getchar();*/

}

T3(){

	float a;
	float b;
	puts("�������� ����� ������ ���� �� 0 �� 10 � �� ����� �� ������ ���� ����� 10");
	puts("������� ����� a");
	scanf("%f",&a);
	puts("������� ����� b");
	scanf("%f",&b);

	float one = a + b;
	float two = a * b;
	float three = a - b;

	puts("______________");
	printf("|a*b|a+b|a-b|");
	puts("\n_____________");
	printf("|%1.f*%1.f|%1.f+%1.f|%1.f-%1.f|",a,b,a,b,a,b);
	puts("\n_____________");
	printf("|%1.f|%1.f|%1.f|",one,two,three);
	getchar();

}

main() {

	setlocale(LC_CTYPE, "RUS");

	//T1();
	//T2();
	T3();

}