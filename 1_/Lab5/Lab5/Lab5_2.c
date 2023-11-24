/*
#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>
#include <math.h>

long float Strukt(long float x) {

	long float t = 3.0;
	//long float y = 13.19;

	long float a = 1 / t + pow(x, 3);
	long float b = pow(t, 2) * sqrtf(abs(a), abs(x));

	long float twc = log(5);
	long float y = twc*abs(b + pow(a, 2));
	return y;
}

main() {

	long float x;

	setlocale(LC_CTYPE, "RUS");

	puts("Введите переменную x, но значения более 35 приводят к переполнению переменной");
	scanf("%lf",&x);
	long float zerX = Strukt(x);

	printf("Введенный пользователем параметр %lf \nЗначение вычесленной функции %lf \nЗначение вычесленной функции с точностьтья до двух знаков полсле запятой %5.2f",x,zerX,zerX);

}*/