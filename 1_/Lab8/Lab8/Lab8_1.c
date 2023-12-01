
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>
#include <math.h>

Nm(int n) {

	int s = 0;
	int m = 0;

	for (int i = n - m; m <= n; m++) {

		s += i;
		printf("результат %d\n", s);

	}

}

main() {

	int n = 0;
	int k = 0;

	setlocale(LC_CTYPE, "RUS");
	puts("Вычесление суммы чисел от m до n(включительно)");
	puts("Введите знаяение переменной n");
	scanf("%d", &n);

	Nm(n);

	printf("\nвыполнено %d раз", n+1);

}
