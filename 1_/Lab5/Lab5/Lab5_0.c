/*
#define _USE_MATH_DEFINES 
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>
#include <math.h>

double ft(double x, double y) {

	double Result = sin(pow(x, 0.5 * y)) + pow(y + 8e-4, 1 / 5.f);
	return Result;
}

double main() {

	setlocale(LC_CTYPE, "RUS");

	double we = ft(0,0);
	printf("ответ: % .3f", we);
}*/