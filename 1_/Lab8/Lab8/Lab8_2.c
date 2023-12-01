#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>
#include <math.h>

TabL(int Step) {

	for (int i = 0; i < Step; i++) {
	
		printf(" ");

	}

}

main() {

	int Step;
	int x = 2;
	int y = 4;

	setlocale(LC_CTYPE, "RUS");

	puts("¬ведите значение шага табул€ции");
	scanf("%i",&Step);

	y = pow(2, x) - 2 * pow(x, 2) - 1;

	printf("|");
	TabL(Step);
	printf("%x",x);
	TabL(Step);
	printf("|");

	printf("|");
	TabL(Step);
	printf("%x", x);
	TabL(Step);
	printf("|");

}