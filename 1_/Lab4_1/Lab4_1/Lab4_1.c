#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>

int res(int S, int Vv, int Vg) {

	int re = (Vg + Vv); // общая скорость сближения
	int td = S / re; 
	return td;

}

int main() {

	setlocale(LC_CTYPE, "RUS");

	int Vv, Vg, S;
	int t;
	puts("Введите скорость Гали");
	scanf("%i",&Vg);
	puts("Введите скорость Вали");
	scanf("%i", &Vv);
	puts("Введите начальное растояние которое было между ними");
	scanf("%i", &S);

	t = res(S,Vv,Vg);

	printf("Они встретятся через %i час", t);
}