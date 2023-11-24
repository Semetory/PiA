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

	//printf("Переменная t равная: %.1f% \nВведенная пользователем переменная x равная: %5.3f", t, x);
	
	float a = 1 / t + pow(x, 3);
	float b = pow(t, 2) * sqrtf(abs(a), abs(x));

	int Aa = (int)a;
	int Bb = (int)b;

	if (Aa % 2 && Bb % 2) { puts("\nПеременные a и b четные"); }
	else puts("\nПеременные a и b не четные");
	
	y = pow(log(abs(b + pow(a, 2))), 5);

	printf("\n\nРезультат вычесления переменной a = %5.3f\nРезультат вычесления переменной b = %5.3f\nРезультат вычесления переменной y = %10.5f\n", a, b, y);

	int C = (int)y;

	if (Aa % 3) puts("\nA кратна трем");
	else puts("A не кратны трем");
	if (Bb % 3) puts("B кратна трем");
	else puts("B не кратны трем");
	if (C % 3) puts("C кратна трем");
	else puts("C не кратны трем");

	if (C + b != 0) puts("\nУсловие выполнено код: 1"); //Математическое выражение с использованием операций отношения вычисление которого дает значение 1 или 0 в зависимости от выполнения условия
	else (puts("Условие не выполнено код: 0"));
	
}

main() {

	float x;


	setlocale(LC_CTYPE, "RUS");

	puts("Введите переменную x в формате, но значения более 35 приводят к переполнению переменной");
	scanf("%f", &x);
	float zX = STR(x);

}*/