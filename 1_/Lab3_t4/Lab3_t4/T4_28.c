#include <stdio.h>
#include <locale.h>
#include <math.h>

float S(float f, float ff, float h){

	float Sd = ((f+ff)/2)*h; //Площадь
	return Sd;

}

float P(float f, float ff, float h) {

	float y = sqrt(h * h + ((1 / 2) * f - ff) * (1 / 2) * f - ff);
	float Pd = 2 * (y + f + ff); //Периметр
	return Pd;

}

main(){

	setlocale(LC_CTYPE, "RUS");

	float f, ff, h;

	puts("Введите значения высоты и оснований равнобедренной трапеции");
	puts("Введите значение высоты");
	scanf("%f",&h);
	puts("Введите зачения высоты первого основания");
	scanf("%f", &f);
	puts("Введите значения высоты второго основания");
	scanf("%f", &ff);
	printf("Было введено значение высоты %1.f",h);
	printf("\nБыло введено значение высоты первого основания %1.f",f);
	printf("\nБыло введено значение высоты второго основания %1.f",ff);

	float r = S(f,ff,h);
	printf("\nПлощадь равнобедренной тропеции равна: %1.f", r);

	float e = P(f,ff,h);
	printf("\nПериметр равнобедренной тропеции равен: %1.f", e);
	getchar();

}