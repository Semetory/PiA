/*
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>

int KNB(int k) {

	int m = 0 + rand() % 3;
	//if (m = 1) puts("������");
	//if (m = 2) puts("�������");
	//if (m = 3) puts("������");

	if (m == 1 && k == 2)  puts("������ ���� �������, �� ���������");
	if (m == 1 && k == 3)  puts("������ ���� ������, �� ��������");

	if (m == 2 && k == 1)  puts("������� �������� �� ��� ������, �� ��������");
	if (m == 2 && k == 3)  puts("������� ����� ���� ������, �� ���������");

	if (m == 3 && k == 1)  puts("������ ������������ ������, �� ���������");
	if (m == 3 && k == 2)  puts("���� ������� ����� ������, �� ��������");

	if (m == k)  puts("�����");

}

main() {

	int k;

	setlocale(LC_ALL, "RUS");

	puts("���� ������, �������, ������");
	puts("�������� �����: 1 ���� ������, 2 ���� �������, 3 ���� ������");

	scanf("%d",&k);
	KNB(k);

}*/