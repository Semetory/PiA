#include <stdio.h>
#include <locale.h>
#include <math.h>

float S(float f, float ff, float h){

	float Sd = ((f+ff)/2)*h; //�������
	return Sd;

}

float P(float f, float ff, float h) {

	float y = sqrt(h * h + ((1 / 2) * f - ff) * (1 / 2) * f - ff);
	float Pd = 2 * (y + f + ff); //��������
	return Pd;

}

main(){

	setlocale(LC_CTYPE, "RUS");

	float f, ff, h;

	puts("������� �������� ������ � ��������� �������������� ��������");
	puts("������� �������� ������");
	scanf("%f",&h);
	puts("������� ������� ������ ������� ���������");
	scanf("%f", &f);
	puts("������� �������� ������ ������� ���������");
	scanf("%f", &ff);
	printf("���� ������� �������� ������ %1.f",h);
	printf("\n���� ������� �������� ������ ������� ��������� %1.f",f);
	printf("\n���� ������� �������� ������ ������� ��������� %1.f",ff);

	float r = S(f,ff,h);
	printf("\n������� �������������� �������� �����: %1.f", r);

	float e = P(f,ff,h);
	printf("\n�������� �������������� �������� �����: %1.f", e);
	getchar();

}