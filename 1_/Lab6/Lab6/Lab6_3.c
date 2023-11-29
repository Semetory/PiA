/*
#include <stdio.h>
#include <locale.h>
#include <math.h>


Circl(float x1, float x2, float y1, float y2, float r1, float r2) {

	printf("Ѕыли введены х первой окружности равный: %3.2f  и х второй окружности равный: %3.2f", x1, x2);
	printf("\nЅыли введены y первой окружности равный: %3.2f и y второй окружности равный: %3.2f ", y1, y2);
	printf("\nЅыли введены r первой окружности равный: %3.2f и r второй окружности равный: %3.2f", r1, r2);

	float d = sqrtf(sqrtf(pow(x2, 2) - pow(x1, 2)) + pow(y2, 2) - pow(y1, 2));

	if (d > (r1 + r2)) { ("\nќкружности не имеют общих точек"); }
	if (d < (r1 + r2)) { puts("\nќкружности пересекаютс€"); }

	//	if (d = (r1 + r2)) { puts("\nќкружности соприкасаютс€"); }
}

main() {

	float x1; 
	float x2;
	float y1;
	float y2;
	float r1;
	float r2;

	setlocale(LC_CTYPE, "RUS");

	puts("¬ведите координату x первой окружности");
	scanf("%f", &x1);
	puts("¬ведите координату y первой окружности");
	scanf("%f", &y1);

	puts("¬ведите координату x второй окружности");
	scanf("%f", &x2);
	puts("¬ведите координату y второй окружности");
	scanf("%f", &y2);

	puts("¬ведите радиус первой окружности");
	scanf("%f", &r1);
	puts("¬ведите радиус второй окружности");
	scanf("%f", &r2);

	Circl(x1, x2, y1, y2, r1, r2);

}
*/