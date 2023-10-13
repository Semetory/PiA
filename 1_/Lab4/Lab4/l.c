#include <stdio.h>
#include <locale.h>

main() {

	setlocale(LC_CTYPE, "RUS");

	/*char c = '!';
	int i = 2;
	float f = 3.14f;
	double d = 5e-12;

	printf("%c",c);
	printf("\n%i",i);
	printf("\n%.2f",f);
	printf("\n%d",d);*/

	/*char c;
	int i;
	float f = 1;
	double d = 4;

	puts("Введите знак к приеру \"!\" ");
	scanf("%c", &c);
	printf("Был введен знак: %c\n", c);

	puts("Введите целое число к примеру \"2\" ");
	scanf("%i", &i);
	printf("Было введено целое число: %i\n", i);

	puts("Введите число Pi");
	scanf("%.4f", &f);
	printf("Было введено число: %f\n", f);

	puts("Введите число с экспонентой");
	scanf("%f", &d);
	printf("Было введно число с экспонетой равное: %.fd\n", d);*/

	float g;
	scanf("%0.f",&g);
	printf("%0.f",g);


}