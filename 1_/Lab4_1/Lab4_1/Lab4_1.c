#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>

int res(int S, int Vv, int Vg) {

	int re = (Vg + Vv); // ����� �������� ���������
	int td = S / re; 
	return td;

}

int main() {

	setlocale(LC_CTYPE, "RUS");

	int Vv, Vg, S;
	int t;
	puts("������� �������� ����");
	scanf("%i",&Vg);
	puts("������� �������� ����");
	scanf("%i", &Vv);
	puts("������� ��������� ��������� ������� ���� ����� ����");
	scanf("%i", &S);

	t = res(S,Vv,Vg);

	printf("��� ���������� ����� %i ���", t);
}