/*
#define _USE_MATH_DEFINES 
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>
#include <math.h>

#define M_PI 3.14159265358979323846
#define M_E 2.71828

float HW_D(float a) {	//Первую проверку не проходит, а втрорую проходит, не разобрался

	//float x = 3; //1
	//float y = 2; //1

	float x = pow(1.5,-6); //2
	float y = -2; //2

	//контрольные значения: F(3,2)= 1.147482 и F(1.5 * 10^-6,-2) = 3.049787

	float f = (3 + pow(M_E, y - 1) / (1 + pow(x, 2) * abs(y - tanf(a))));

}

void main() {

	float a = 1;

	setlocale(LC_CTYPE, "RUS");
	float f = HW_D(a);

	printf("%f", f);

} */