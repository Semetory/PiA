/*
#include <stdio.h>
#include <locale.h>
#include <math.h>

Maines_1() {

	//F(x) = -x ^ 2 + x - 9 ��� x >= 8

	int f = 0; //-1 * pow(x, 2) + x - 9;
	
	for (int x = 8; x >= 8; x++) {
	
		f = ( - 1 * pow(x, 2)) + x - 9;
		//printf("%i", f);
		printf("������� f(x) = %i\n", f);
	}

}

Maines_2() {

	//F(x) = 1 / (x ^ 4 - 6) ��� x < 8

	float f = 0;
	for (float x = 8; x < 8; x--) {

		f = 1 / (pow(x, 4) - 6);
		//printf("%.f", f);
		printf("������� f(x) = %.f\n", f);
	}

}

main () {

	
	//		=>-x^2+x-9 ��� x>=8
	//F(x) =
	//		=>1/(x^4-6) ��� x<8
	

	int i = 0;

	setlocale(LC_CTYPE, "RUS");

	puts("�������� ��������� ������ � ����� �������� 1-�� ��� 2-�� ������� f(x)");
	puts("������� 1 ���� ������ ��� 2 ���� ������");

	scanf("%i",&i);

	if (i = 1) Maines_1();
	if (i = 2) Maines_2();
	//if (i != 1  2) || (i != 1 || 2) puts("�� ���������� ��������");
	

}
*/