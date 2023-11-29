/*
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>
#include <math.h>

Simv_0() {	for (int start = 1; start <= 10; start++) putchar('*'); }
Simv_1(int k) {	for (int start = 1; start <= k; start++) putchar('*'); }

Simv_2(int k) {

	for (int start = 1; start <= k; start++) {
		for (int start = 1; start <= 1; start++) {
			putchar('*');
		}
	}
	putchar('+');
}


Simv_3(int k) { 

	for (int start = 0; start < k/2; start++) putchar('-');
	for (int start = k/2 ; start < k; start++) putchar('*');

}

Simv_4(int k) {

	for (int start = 1; start <= k; start++) {
		putchar('-');
		putchar('!');
	}

}

main() {

	int k = 0;

	setlocale(LC_CTYPE, "RUS");

	puts("¬ведите колличество симолов");
	scanf("%d",&k);

	//Simv_0();
	//Simv_1(k);
	//Simv_2(k);
	//Simv_3(k);
	Simv_4(k);

}
*/