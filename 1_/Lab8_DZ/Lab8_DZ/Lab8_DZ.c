
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>
#include <math.h>

Nn(int N) {

	for (int i = 0; i < 1000; i++) { //������������	�� 1000 ����������

		printf("\n%i", N * i);

	}

}

main() {

	//2) ��������� ��� ������ N, ��������� �������������, �������� ������������ 1, 1�1, 2�1, 3 � ...1, N

	int N;

	setlocale(LC_CTYPE, "RUS");

	puts("�������� ���������� ������������ ��� ��������� ����� N");
	puts("������� ����� �����\n");

	scanf("%i",&N);

	Nn(N);


}