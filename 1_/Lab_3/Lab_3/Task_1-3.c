#include <stdio.h>
#include <locale.h>
#include <math.h>
#define D 2.54
#define P 2.32166
#define S 2.7076

T1(){

	//ѕеременные дл€ Task 1

	int num;
	int nu;
	int numb;
	int nub;
	int mns;
	int nns;
	int pr;
	int prr;
	float Dl;
	float Dlo;

	printf("¬веденные числа должны быть через пробел");

	//¬вод_вывод

	printf("\n¬ведите числа ");
	scanf(" %d %d",&num, &nu);
	printf("Ѕыли введены числа %d и %d",num, nu);
	getchar();
	
	//¬вод вывод суммы чисел

	printf("\n¬ведите числа дл€ их суммировани€ ");
	scanf(" %d %d", &numb, &nub);
	printf("\n—умма чисел равна %d", numb + nub);
	getchar();

	//¬вод вывоод разности чисел
	
	printf("\n¬ведите числа дл€ их разности ");
	scanf(" %d %d", &mns, &nns);
	printf("\n–азность чисел равна %d", mns-nns);
	getchar();

	//¬вод вывод произведени€ чисел

	printf("\n¬ведите числа дл€ их произведени€ ");
	scanf(" %d %d", &pr, &prr);
	printf("\nѕроизведение числе равно %d", pr*prr);
	getchar();

	//¬вод вывод частности чисел с остатком

	printf("\n¬ведите числа дл€ делени€ с остатком ");
	scanf(" %d %d", &Dl, &Dlo);
	printf("\n„астное число %.0f остаток от делени€ %.2f", Dl/Dlo,Dl/Dlo);
	getchar();

}

T2(){

	int dym;
	int pulugda;
	int starolytovsky;
	float result;
	int var;

	puts("¬ведите колличество дюймой дл€ перевода в сантиметры");
	scanf("%d",&dym);
	result = D * dym;
	printf(" %d дюймов - это %.1f см ", dym, result);
	getchar();

	/*puts("¬ведите колличество ѕульгада дл€ перевода в их в сантиметры");
	scanf("%d", &pulugda);
	result = P * pulugda;
	printf(" %d пюльгада - это %.1f см ", pulugda, result);
	getchar();*/

	/*puts("¬ведите колличество единиц старолитовской системы счислени€ дл€ перевода их в сантиметры");
	scanf("%d", &starolytovsky);
	result = S * starolytovsky;
	printf(" %d колличество единиц старолитовской системы счислени€ - это %.1f см ", starolytovsky, result);
	getchar();*/

}

T3(){

	float a;
	float b;
	puts("¬водимые числа должны быть от 0 до 10 и их сумма не далжна быть менее 10");
	puts("¬ведите число a");
	scanf("%f",&a);
	puts("¬ведите число b");
	scanf("%f",&b);

	float one = a + b;
	float two = a * b;
	float three = a - b;

	puts("______________");
	printf("|a*b|a+b|a-b|");
	puts("\n_____________");
	printf("|%1.f*%1.f|%1.f+%1.f|%1.f-%1.f|",a,b,a,b,a,b);
	puts("\n_____________");
	printf("|%1.f|%1.f|%1.f|",one,two,three);
	getchar();

}

main() {

	setlocale(LC_CTYPE, "RUS");

	//T1();
	//T2();
	T3();

}