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

	puts("������� ����� ����� ������������ � mmax");
	scanf("%d", &mmax);
	int M = rand10(mmax);
	printf("����� ����� �� 1 �� %d",M);
	system("Pause");

	puts(" � dmin");
	scanf("%d", &dmin);
	puts(" � dmax");
	scanf("%d", &dmax);
	int Dd = rand_double(dmin, dmax);
	printf("������������ ����� %d � �������� ���������", Dd);
	system("Pause");



}