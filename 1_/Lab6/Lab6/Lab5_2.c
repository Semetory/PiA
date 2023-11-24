#include <stdio.h>
#include <locale.h>
#include <math.h>

T2() { //что то не то


	/*
			=>-x^2+x-9 при x>=8
	F(x) =
			=>1/(x^4-6) при x<8
	*/


	//	for (int x = 0; x = 100 || x >= 8; x++) { //Модификация до 100// printf("\n%x",x);}

		//f(x) = pow(x, 2) + x - 9; //при x>=8
		//f(x) = 1 / (pow(x,4)-6);  //при x<8

		for (int x = 0; x >= 8; x++) { // Вообще не работает

			float f = (pow(x, 2) + x - 9);
			printf("ko%f", f);


		}

	for (int x = 0; x < 8; x++) { //Выводит какуюто странную результат-_-

		float f = 1 / (pow(x, 4) - 6);
		printf("ko%f", f);


	}

}

main () {



}