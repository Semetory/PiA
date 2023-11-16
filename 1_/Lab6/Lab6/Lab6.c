#include <stdio.h>
#include <locale.h>
#include <math.h>

T1() {

	int yeas = 0;
	puts("Введите год");
	scanf("%i", &yeas);
	if (yeas % 4) printf("Год %d високосный", yeas);
	else printf("Год %d не високосный", yeas);

	/*************************************************************/

	//int yeas = 0;
	puts("Введите год");
	scanf("%i", &yeas);

	if (yeas % 4 == 0 && yeas != yeas / 4 || yeas % 400 == 0) printf("Год %d високосный", yeas);
	else printf("Год %d не високосный", yeas);
}
T2() { //что то не то


	/*
			=>-x^2+x-9 при x>=8
	F(x) =
			=>1/(x^4-6) при x<8
	*/


	//	for (int x = 0; x = 100 || x >= 8; x++) { //Модификация до 100// printf("\n%x",x);}

		//f(x) = pow(x, 2) + x - 9; //при x>=8
		//f(x) = 1 / (pow(x,4)-6);  //при x<8

		/*for (int x = 0; x >= 8; x++) { // Вообще не работает

			float f = (pow(x, 2) + x - 9);
			printf("ko%f", f);


		}*/

	for (int x = 0; x < 8; x++) { //Выводит какуюто странную результат-_-

		float f = 1 / (pow(x, 4) - 6);
		printf("ko%f", f);


	}

}

T3() {

	float x1;
	float x2;
	float y1;
	float y2;
	float r1;
	float r2;

	puts("Введите координату x первой окружности");
	scanf("%f", &x1);
	puts("Введите координату y первой окружности");
	scanf("%f", &y1);

	puts("Введите координату x второй окружности");
	scanf("%f", &x2);
	puts("Введите координату y второй окружности");
	scanf("%f", &y2);

	puts("Введите радиус первой окружности");
	scanf("%f", &r1);
	puts("Введите радиус второй окружности");
	scanf("%f", &r2);

	printf("Были введены х %3.5f первой и х %3.5f второй окружности", x1, x2);
	printf("\nБыли введены y %3.5f первой и y %3.5f второй окружности", y1, y2);
	printf("\nБыли введены r %3.5f первой и r %3.5f второй окружности", r1, r2);

	float d = sqrtf(sqrtf(pow(x2, 2) - pow(x1, 2)) + pow(y2, 2) - pow(y1, 2));

	if (d > (r1 + r2)) { ("\nНе имеют общих точек"); }
	if (d = (r1 + r2)) { puts("\nСоприкасаются"); }
	if (d < (r1 + r2)) { puts("\nПересекаются"); }



}


main() { //Недодел


	setlocale(LC_CTYPE, "RUS");

	//T1();
	//T2(); //что-то не то
	//T3();

	

	int rectangle = 5;
	for (int i = 0; i < rectangle; i++) {
		for (int j = -1; j < rectangle; j++) {
			printf("+");
		}
		printf("\n");
	}



	/*for (i = -radius; i <= radius; i++)
	{
		for (j = -radius; j <= radius; j++)
			if (sqrt(i * i + j * j) <= (radius / 2)) printf("*");
			else printf(" ");
		printf("\n");

	}*/
}