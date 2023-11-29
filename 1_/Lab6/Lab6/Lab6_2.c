/*
#include <stdio.h>
#include <locale.h>
#include <math.h>

Maines_1() {

	//F(x) = -x ^ 2 + x - 9 при x >= 8

	int f = 0; //-1 * pow(x, 2) + x - 9;
	
	for (int x = 8; x >= 8; x++) {
	
		f = ( - 1 * pow(x, 2)) + x - 9;
		//printf("%i", f);
		printf("Функция f(x) = %i\n", f);
	}

}

Maines_2() {

	//F(x) = 1 / (x ^ 4 - 6) при x < 8

	float f = 0;
	for (float x = 8; x < 8; x--) {

		f = 1 / (pow(x, 4) - 6);
		//printf("%.f", f);
		printf("Функция f(x) = %.f\n", f);
	}

}

main () {

	
	//		=>-x^2+x-9 при x>=8
	//F(x) =
	//		=>1/(x^4-6) при x<8
	

	int i = 0;

	setlocale(LC_CTYPE, "RUS");

	puts("Выбирете запустить расчет и вывод значений 1-ой или 2-ой функции f(x)");
	puts("Введите 1 если первую или 2 если вторую");

	scanf("%i",&i);

	if (i = 1) Maines_1();
	if (i = 2) Maines_2();
	//if (i != 1  2) || (i != 1 || 2) puts("Не корректное значение");
	

}
*/