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
	long double d = 4;
	
	puts("¬ведите знак к приеру \"!\" ");
	scanf("%c", &c);
	printf("Ѕыл введен знак: %c\n", c);

	puts("¬ведите целое число к примеру \"2\" ");
	scanf("%i", &i);
	printf("Ѕыло введено целое число: %i\n", i);

	puts("¬ведите число Pi");
	scanf("%d", &f);
	printf("Ѕыло введено число: %f \n", f);

	puts("¬ведите число с экспонентой");
	scanf("%d", &d);
	puts("Ѕыло введно число с экспонетой равное: %d \n", d);*/

	float g;
	scanf("%.f",&g);
	printf("÷ела€ часть: %.f и дробна€ часть: %.3f",g,g);
	






}