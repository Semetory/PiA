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

	puts("������� ���� � ������ \"!\" ");
	scanf("%c", &c);
	printf("��� ������ ����: %c\n", c);

	puts("������� ����� ����� � ������� \"2\" ");
	scanf("%i", &i);
	printf("���� ������� ����� �����: %i\n", i);

	puts("������� ����� Pi");
	scanf("%.4f", &f);
	printf("���� ������� �����: %f\n", f);

	puts("������� ����� � �����������");
	scanf("%f", &d);
	printf("���� ������ ����� � ���������� ������: %.fd\n", d);*/

	float g;
	scanf("%0.f",&g);
	printf("%0.f",g);


}