/*
#include <stdio.h>
#include <locale.h>
#include <math.h>

Gtsd(int yeas) {

	if (yeas % 4) printf("��� %d ����������", yeas);
	else printf("��� %d �� ����������", yeas);

}

NGr(int yeas) {

	if (yeas % 4 == 0 && yeas != yeas / 4 || yeas % 400 == 0) printf("��� %d ����������", yeas);
	else printf("��� %d �� ����������", yeas);

}

main() {

	int yeas = 0;

	setlocale(LC_CTYPE, "RUS");

	puts("������� ���");
	scanf("%i", &yeas);
	Gtsd(yeas);

	puts("\n");
	system("Pause");

	puts("������� ���");
	scanf("%i", &yeas);
	NGr(yeas);

}*/