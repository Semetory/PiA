//28
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>

main() {

	int c = 0;

	setlocale(LC_CTYPE, "RUS");

	puts("������� ����������� ������ � ��������� �� 1 �� 99");
	scanf("%d",&c);

	int v = c;

	switch (c)
	{
	case 1 : puts("�������");
		break;
	case 21 :puts("�������");
		break;
	case 31 :puts("�������");
		break;
	case 41 :puts("�������");
		break;
	case 51 :puts("�������");
		break;
	case 61 :puts("�������");
		break;
	case 71 :puts("�������");
		break;
	case 81 :puts("�������");
		break;
	case 91:puts("�������");
		break;
	case 2 :puts("�������");
		break;
	case 3 :puts("�������");
		break;
	case 4 :puts("�������");
		break;
	case 22 :puts("�������");
		break;
	case 23 :puts("�������");
		break;
	case 24 :puts("�������");
		break;
	case 32 :puts("�������");
		break;
	case 33 :puts("�������");
		break;
	case 34 :puts("�������");
		break;
	case 42 :puts("�������");
		break;
	case 43 :puts("�������");
		break;
	case 44 :puts("�������");
		break;
	case 52 :puts("�������");
		break;
	case 53 :puts("�������");
		break;
	case 54 :puts("�������");
		break;
	case 62 :puts("�������");
		break;
	case 63 :puts("�������");
		break;
	case 64 :puts("�������");
		break;
	case 72 :puts("�������");
		break;
	case 73 :puts("�������");
		break;
	case 74 :puts("�������");
		break;
	case 82 :puts("�������");
		break;
	case 83 :puts("�������");
		break;
	case 84 :puts("�������");
		break;
	case 92 :puts("�������");
		break;
	case 93 :puts("�������");
		break;
	case 94 :puts("�������");
		break;
	default: puts("������");
		break;
	}

}