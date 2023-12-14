#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>


int rand10(int mmax) {

	int Mm = 1 + rand() % mmax;
	return Mm;

}

double rand_double(double dmin, double dmax) {

	double range = (dmax - dmin);
	return range;
}


main() {

	int mmax = 0;

	double dmin = 0;
	double dmax = 0;

	setlocale(LC_ALL, "RUS");

	puts("Введите целое число передающееся в mmax");
	scanf("%d", &mmax);
	int M = rand10(mmax);
	printf("целое число от 1 до %d",M);
	system("Pause");

	puts(" в dmin");
	scanf("%d", &dmin);
	puts(" в dmax");
	scanf("%d", &dmax);
	int Dd = rand_double(dmin, dmax);
	printf("вещественное число %d в заданном диапазоне", Dd);
	system("Pause");



}