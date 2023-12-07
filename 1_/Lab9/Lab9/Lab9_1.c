
#define _CRT_SECURE_NO_WARNINGS
#define ROW 5
#define COL 5
//#define ROW 9
//#define COL 9

#include <stdio.h>
#include <locale.h>
#include <math.h>

void main() {

	int row = 5; 
	int col;




	printf("\n");
	for (row = 0; row <= ROW; row++) {
		for (col = 0; col <= COL; col++) {
			printf("%5d", row);
		}
		printf("\n\n");
	}
	//system("pause");
	
//	system("pause");


	//int row, col;
	//printf("\n");
	//for (row = 1; row <= ROW; ++row) {
	//	for (col = 1; col <= COL; col++) {
	//		printf("%5d", col * row);
	//
	//	}
	//	printf("\n");
	//}
	//system("pause");
}