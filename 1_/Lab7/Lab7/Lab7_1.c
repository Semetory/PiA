/*
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>

int main() {

	char c;

	setlocale(LC_CTYPE, "RUS");

	printf("Введите символы 'a' или 'b' или цыфры  '1' или '2'\n");
	scanf("%c",&c);

	switch (c){

	case 'a':
		printf("Введено 'a'.\n");
		break;

	case 'b':
		printf("Введено 'b'.\n");
		break;

	case '1':
		printf("Введено '1'.\n");
		break;

	case '2':
		printf("Введено '2'.\n");
		break;

	default:
		printf("Неизвестный символ\n");
	}

	return 0;

}
*/