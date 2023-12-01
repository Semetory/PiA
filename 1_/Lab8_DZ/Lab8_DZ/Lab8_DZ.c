
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>
#include <math.h>

Nn(int N) {

	for (int i = 0; i < 1000; i++) { //Ограничитель	до 1000 повторений

		printf("\n%i", N * i);

	}

}

main() {

	//2) Вычислите для целого N, заданного пользователем, значение произведения 1, 1·1, 2·1, 3 · ...1, N

	int N;

	setlocale(LC_CTYPE, "RUS");

	puts("Програма вычесления произведения для заданного числа N");
	puts("Введите целое число\n");

	scanf("%i",&N);

	Nn(N);


}