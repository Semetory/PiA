/*
#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>
#include <math.h>

#define M_PI 3.14159265358979323846
#define M_E 2.71828

float STR(float x) {

	float t = 3.0;
	float y = 13.19;

	//printf("���������� t ������: %.1f% \n��������� ������������� ���������� x ������: %5.3f", t, x);
	
	float a = 1 / t + pow(x, 3);
	float b = pow(t, 2) * sqrtf(abs(a), abs(x));

	int Aa = (int)a;
	int Bb = (int)b;

	if (Aa % 2 && Bb % 2) { puts("\n���������� a � b ������"); }
	else puts("\n���������� a � b �� ������");
	
	y = pow(log(abs(b + pow(a, 2))), 5);

	printf("\n\n��������� ���������� ���������� a = %5.3f\n��������� ���������� ���������� b = %5.3f\n��������� ���������� ���������� y = %10.5f\n", a, b, y);

	int C = (int)y;

	if (Aa % 3) puts("\nA ������ ����");
	else puts("A �� ������ ����");
	if (Bb % 3) puts("B ������ ����");
	else puts("B �� ������ ����");
	if (C % 3) puts("C ������ ����");
	else puts("C �� ������ ����");

	if (C + b != 0) puts("\n������� ��������� ���: 1"); //�������������� ��������� � �������������� �������� ��������� ���������� �������� ���� �������� 1 ��� 0 � ����������� �� ���������� �������
	else (puts("������� �� ��������� ���: 0"));
	
}

main() {

	float x;


	setlocale(LC_CTYPE, "RUS");

	puts("������� ���������� x � �������, �� �������� ����� 35 �������� � ������������ ����������");
	scanf("%f", &x);
	float zX = STR(x);

}*/