/*
#include <stdio.h>
#include <locale.h>
#include <math.h>

Gtsd(int yeas) {

	if (yeas % 4) printf("Год %d високосный", yeas);
	else printf("Год %d не високосный", yeas);

}

NGr(int yeas) {

	if (yeas % 4 == 0 && yeas != yeas / 4 || yeas % 400 == 0) printf("Год %d високосный", yeas);
	else printf("Год %d не високосный", yeas);

}

main() {

	int yeas = 0;

	setlocale(LC_CTYPE, "RUS");

	puts("Введите год");
	scanf("%i", &yeas);
	Gtsd(yeas);

	puts("\n");
	system("Pause");

	puts("Введите год");
	scanf("%i", &yeas);
	NGr(yeas);

}*/