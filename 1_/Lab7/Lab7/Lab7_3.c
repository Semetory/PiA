//28
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>

main() {

	int c = 0;

	setlocale(LC_CTYPE, "RUS");

	puts("Введите колличество копеек в диапазоне от 1 до 99");
	scanf("%d",&c);

	int v = c;

	switch (c)
	{
	case 1 : puts("Копейка");
		break;
	case 21 :puts("Копейка");
		break;
	case 31 :puts("Копейка");
		break;
	case 41 :puts("Копейка");
		break;
	case 51 :puts("Копейка");
		break;
	case 61 :puts("Копейка");
		break;
	case 71 :puts("Копейка");
		break;
	case 81 :puts("Копейка");
		break;
	case 91:puts("Копейка");
		break;
	case 2 :puts("Копейки");
		break;
	case 3 :puts("Копейки");
		break;
	case 4 :puts("Копейки");
		break;
	case 22 :puts("Копейки");
		break;
	case 23 :puts("Копейки");
		break;
	case 24 :puts("Копейки");
		break;
	case 32 :puts("Копейки");
		break;
	case 33 :puts("Копейки");
		break;
	case 34 :puts("Копейки");
		break;
	case 42 :puts("Копейки");
		break;
	case 43 :puts("Копейки");
		break;
	case 44 :puts("Копейки");
		break;
	case 52 :puts("Копейки");
		break;
	case 53 :puts("Копейки");
		break;
	case 54 :puts("Копейки");
		break;
	case 62 :puts("Копейки");
		break;
	case 63 :puts("Копейки");
		break;
	case 64 :puts("Копейки");
		break;
	case 72 :puts("Копейки");
		break;
	case 73 :puts("Копейки");
		break;
	case 74 :puts("Копейки");
		break;
	case 82 :puts("Копейки");
		break;
	case 83 :puts("Копейки");
		break;
	case 84 :puts("Копейки");
		break;
	case 92 :puts("Копейки");
		break;
	case 93 :puts("Копейки");
		break;
	case 94 :puts("Копейки");
		break;
	default: puts("Копеек");
		break;
	}

}