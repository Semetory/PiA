#include <stdio.h>
#include <locale.h>
#include <math.h>

T2() { //��� �� �� ��


	/*
			=>-x^2+x-9 ��� x>=8
	F(x) =
			=>1/(x^4-6) ��� x<8
	*/


	//	for (int x = 0; x = 100 || x >= 8; x++) { //����������� �� 100// printf("\n%x",x);}

		//f(x) = pow(x, 2) + x - 9; //��� x>=8
		//f(x) = 1 / (pow(x,4)-6);  //��� x<8

		for (int x = 0; x >= 8; x++) { // ������ �� ��������

			float f = (pow(x, 2) + x - 9);
			printf("ko%f", f);


		}

	for (int x = 0; x < 8; x++) { //������� ������� �������� ���������-_-

		float f = 1 / (pow(x, 4) - 6);
		printf("ko%f", f);


	}

}

main () {



}