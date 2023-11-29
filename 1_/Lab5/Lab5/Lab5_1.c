/*
#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>
#include <math.h>

#define M_PI 3.14159265358979323846


long float Gradusez(long float gr) {

	 long float g = sin(gr * (M_PI / 180));
	 return g;

}

long float main() {

	long float gr = 0;

	setlocale(LC_CTYPE, "RUS");

	puts("Программа вычисления синуса");
	puts("Введите градус");

	scanf("%lf",&gr);
	long float Ggr = Gradusez(gr);

	printf("Результат синус: %.1f град %lf", gr, Ggr);

}*/