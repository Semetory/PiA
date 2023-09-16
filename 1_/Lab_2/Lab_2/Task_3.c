#include <stdio.h>
#include <locale.h>
#include "Task_3.h"

main(){

	int L = 433;
	int n = 4;
	int k = 3;
	float m = 1;
	
	setlocale(LC_CTYPE, "RUS");


	printf("Разделим %d на %d", n/L);
}