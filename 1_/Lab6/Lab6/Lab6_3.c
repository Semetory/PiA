/*
#include <stdio.h>
#include <locale.h>
#include <math.h>


Circl(float x1, float x2, float y1, float y2, float r1, float r2) {

	printf("���� ������� � ������ ���������� ������: %3.2f  � � ������ ���������� ������: %3.2f", x1, x2);
	printf("\n���� ������� y ������ ���������� ������: %3.2f � y ������ ���������� ������: %3.2f ", y1, y2);
	printf("\n���� ������� r ������ ���������� ������: %3.2f � r ������ ���������� ������: %3.2f", r1, r2);

	float d = sqrtf(sqrtf(pow(x2, 2) - pow(x1, 2)) + pow(y2, 2) - pow(y1, 2));

	if (d > (r1 + r2)) { ("\n���������� �� ����� ����� �����"); }
	if (d < (r1 + r2)) { puts("\n���������� ������������"); }

	//	if (d = (r1 + r2)) { puts("\n���������� �������������"); }
}

main() {

	float x1; 
	float x2;
	float y1;
	float y2;
	float r1;
	float r2;

	setlocale(LC_CTYPE, "RUS");

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

	Circl(x1, x2, y1, y2, r1, r2);

}
*/