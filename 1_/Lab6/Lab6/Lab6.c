/*
#include <stdio.h>
#include <locale.h>
#include <math.h>




T3() {

	float x1;
	float x2;
	float y1;
	float y2;
	float r1;
	float r2;

	puts("������� ���������� x ������ ����������");
	scanf("%f", &x1);
	puts("������� ���������� y ������ ����������");
	scanf("%f", &y1);

	puts("������� ���������� x ������ ����������");
	scanf("%f", &x2);
	puts("������� ���������� y ������ ����������");
	scanf("%f", &y2);

	puts("������� ������ ������ ����������");
	scanf("%f", &r1);
	puts("������� ������ ������ ����������");
	scanf("%f", &r2);

	printf("���� ������� � %3.5f ������ � � %3.5f ������ ����������", x1, x2);
	printf("\n���� ������� y %3.5f ������ � y %3.5f ������ ����������", y1, y2);
	printf("\n���� ������� r %3.5f ������ � r %3.5f ������ ����������", r1, r2);

	float d = sqrtf(sqrtf(pow(x2, 2) - pow(x1, 2)) + pow(y2, 2) - pow(y1, 2));

	if (d > (r1 + r2)) { ("\n�� ����� ����� �����"); }
	if (d = (r1 + r2)) { puts("\n�������������"); }
	if (d < (r1 + r2)) { puts("\n������������"); }



}


main() { //�������


	setlocale(LC_CTYPE, "RUS");

	//T1();
	//T2(); //���-�� �� ��
	//T3();

	

	int rectangle = 5;
	for (int i = 0; i < rectangle; i++) {
		for (int j = -1; j < rectangle; j++) {
			printf("+");
		}
		printf("\n");
	}



	/*for (i = -radius; i <= radius; i++)
	{
		for (j = -radius; j <= radius; j++)
			if (sqrt(i * i + j * j) <= (radius / 2)) printf("*");
			else printf(" ");
		printf("\n");

	}
}*/