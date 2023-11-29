/*
#include <stdio.h>
#include <locale.h>
#include <math.h>

Treangle(int x, int y) {

	//int x1 = -4
	//int x2 = 4; x+
	//int y = -6; y+-

	//if(x>= -4) if (x<=4) if (y <= 0) if (y >= -6 ) return 1;

	if (x >= -4 && x <= 4 && y <= 0 && y >= -6) return 1;
	else return 0;

}

main() {

	int x = 0;
	int y = 0;

	setlocale(LC_CTYPE, "RUS");

	puts("Введите координаты точек x и y для проверки их пернадлежат ли они к диапазону координат заданного заданием триугольника");

	puts("Введите координаты точки x");
	scanf("%d",&x);
	puts("Введите координаты точки y");
	scanf("%d",&y);

	int T = Treangle(x,y);

	if(T == 1) puts("Точка с данными координатами входит в диапазон значений");
	if(T == 0) puts("Точка с данными координатами не входит в диапазон значений");

}*/
