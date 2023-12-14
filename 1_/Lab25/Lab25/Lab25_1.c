/*
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>

int Chisl(int m, int k) {

	if (k == m) {
		puts("\nВы угадали");
	}
	else puts("\nВы не угадали");

}

main() {

	int k;
	int m = 1 + rand() % 10;

	setlocale(LC_ALL,"RUS");

	puts("Введите число которое было загаданно");
	scanf("%d",&k);
	printf("Загаданное число %d",m);
	Chisl(m,k);
}*/