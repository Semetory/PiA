/*
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>
#include <math.h>

float Calk(float x, char c, float y) {
	float r;
	switch (c)
	{
	case '+': return x + y;
		break;

	case '-': return x - y;
		break;

	case '*': return x * y;
		break;

	case '/': return x / y;
		break;

	case '^': return r = powf(x,y);
		break;

	}
}

float main() {

	float x;
	float y;

	char c;

	setlocale(LC_CTYPE, "RUS");

	puts("Программа калькулятор");
	puts("Введите через пробел значение пробел знак операции второе значение\n");
	scanf("%f %c %f",&x,&c,&y);
	float F = Calk(x,c,y);
	printf("=%f", F);

}
*/