#include <stdio.h>
#include <math.h>
#include <locale.h>

#define M_E 2.72

//double fun1(double x) { return ((sin(pow(x, 2) + pow(x, -1) + pow(x, 1 / 3))) / tanh(pow(M_E, cos(sqrt(x))))) * pow(10, -6); }

main() {

	setlocale(LC_ALL,"RUS");

	//В данном случае: пункт 3 из подзадачи 1
	long double x0, xn, h, d, g1,g2,g3,g1_1, g22;
	int varr;

	puts("Введите интервал значений переменный с x1 до xn"); 
	scanf("%lf",&x0);
	scanf("%lf",&xn);
	puts("Введите шаг h");
	scanf("%lf",&h);

	//Обычно: или если называть подругому (задание 1-го пункта из подзадачи 1)
	double x = 0;
	puts("Введите значения переменный x");
	scanf("%d",&x);
	double b = fun1(x);
	printf("%d",b);


	//g1 = 0;
	//g1_1 = xn;

	g2 = x0;
	g22 = -10; //как пример бесконечно малого числа, но вследстивии того, что эта формула не будет корректно понимать это значение мы получим -nan(ind)

	//g3 = x0;

	//(xn,xk) //как пример, не не обязательно от 0 до 40
	puts("-------------------");
	do
	{
		g1 += h;
		d = ((sin(pow(g1, 2) + pow(g1, -1) + pow(g1, 1 / 3))) / tanh(pow(M_E, cos(sqrt(g1))))) * pow(10, -6);
		printf("\n%lf|%lf", g1, d);
	} while (g1 <= x0);
	do
	{
		d = ((sin(pow(g1_1, 2) + pow(g1_1, -1) + pow(g1_1, 1 / 3))) / tanh(pow(M_E, cos(sqrt(g1_1))))) * pow(10, -6);
		printf("\n%lf|%lf", g1_1, d);
		g1_1 += h;
	} while (g1_1 < 40);
	puts("\n-------------------");




	//[xn,xk) или (xn,xk]
	//как пример того как это можно сделать:
	puts("Выберите [xn,xk) или (xn,xk] это 1 или 2");
	scanf("%d",&varr);
	puts("-------------------");
	if (varr == 1) { //[xn,xk)
		do
		{
			d = ((sin(pow(g2, 2) + pow(g2, -1) + pow(g2, 1 / 3))) / tanh(pow(M_E, cos(sqrt(g2))))) * pow(10, -6);
			printf("\n%lf|%lf", x0, d);
			g2 += h;

		} while (g2<=xn);
		do
		{
		
			d = ((sin(pow(g2, 2) + pow(g2, -1) + pow(g2, 1 / 3))) / tanh(pow(M_E, cos(sqrt(g2))))) * pow(10, -6);
			printf("\n%lf|%lf", x0, d);
			g2 += h;

		} while (g2>pow(xn,xn));//40 как представление бесконечности (g2>xn); 
	}
	if (varr == 2) { //(xn,xk]
		do
		{
	
			d = ((sin(pow(g22, 2) + pow(g22, -1) + pow(g22, 1 / 3))) / tanh(pow(M_E, cos(sqrt(g22))))) * pow(10, -6);
			printf("\n%lf|%lf", g22, d);
			g22 += h;
	
		} while (g22<=x0);
		do
		{
	
			d = ((sin(pow(g22, 2) + pow(g22, -1) + pow(g22, 1 / 3))) / tanh(pow(M_E, cos(sqrt(g22))))) * pow(10, -6);
			printf("\n%lf|%lf", g22, d);
			g22 += h;
	
		} while (g22 <= xn);
	}
	puts("\n-------------------");

	//[xn,xk]
	puts("-------------------");
	do 
	{
		d = ((sin(pow(g3, 2) + pow(g3, -1) + pow(g3, 1 / 3))) / tanh(pow(M_E, cos(sqrt(g3)))))* pow(10, -6);
		printf("\n%lf|%lf",x0,d); //таблица: начальное значение переменной x0 и  d
		g3 = (x0 += h);

	} while (x0 <= xn);
	puts("\n-------------------");

}



