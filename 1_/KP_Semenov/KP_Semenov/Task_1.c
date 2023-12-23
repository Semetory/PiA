#include <stdio.h>
#include <math.h>
#include <locale.h>

#define _CRT_SECURE_NO_DEPRECATE

#define SCREENW 60
#define SCREENH 80
#define PI 3.14

typedef double (*TFun) (double);
void plot(double x0, double x1, TFun f);
double fun1(double x);
double fun2(double x);

int main() {

    double x, y;
    int Var = 0;

    setlocale(LC_ALL, "RUS");

    puts("����������� ���� ������������");
    puts("������ ��������� ������ ������ ������� �� ��������� ��������� x � y");

    puts("�������� ������������� ������� ��� ���������� ������� �������, � ������� � ����� (1 ��� 2).");
    puts("������(1) : Y(x) = x ^ 2 - PI * x * cos(PI * x)");
    puts("������ (2): V(x) = \n(1 + x + pow(x, 2)) / (1 + pow(x,2)), ���� � < 0\n");
    puts("sqrt(1 + (2 * x) / (1 + pow(x, 2))), ���� 0 <= x<1\n2 * abs(0.5 + sin(x)), ���� x >= 1");

    puts("\n������� �����:");
    scanf("%i", &Var);

    puts("������� x � y");
    scanf("%lf%lf", &x, &y);

    switch (Var) {

    case 1:
        plot(x, y, fun1);
        break;
    case 2:
        plot(x, y, fun2);
        break;
    default:
        puts("��� ������ ������ ������� ���� �������� ������");
        break;
    }

}

double fun1(double x) { return pow(x,2)-PI*x*cos(PI*x); }

double fun2(double x) { 
    
    if(x<0)  return (1 + x + pow(x, 2)) / (1 + pow(x,2));

    if(x>=0 || x<1)  return sqrt(1 + (2 * x) / (1 + pow(x, 2)));

    if (x>=1)  return 2 * abs(0.5 + sin(x));

}


void plot(double x0, double x1, TFun f) {
   
    // int SCREENW = 60, SCREENH = 40;//������� ���� ������ � ��������

    char screen[SCREENW][SCREENH];

    double x, y[SCREENW];

    double ymin = 0, ymax = 0;

    double hx, hy;

    int i, j;

    int xz, yz;

    hx = (x1 - x0) / (SCREENW - 1);

    for (i = 0, x = x0; i < SCREENW; ++i, x += hx) {

        y[i] = f(x); //������ �������� ������� ��� ������ ����� ���� ������ �������

        if (y[i] < ymin) ymin = y[i];

        if (y[i] > ymax) ymax = y[i];

    }

    hy = (ymax - ymin) / (SCREENH - 1);

    yz = (int)floor(ymax / hy + 0.5);

    xz = (int)floor((0. - x0) / hx + 0.5);

    //���������� ���� � ���������� ������� ����������� ���������

    for (j = 0; j < SCREENH; ++j)

        for (i = 0; i < SCREENW; ++i) {

            if (j == yz && i == xz) screen[i][j] = '+';

            else if (j == yz) screen[i][j] = '-';

            else if (i == xz) screen[i][j] = '|';

            else screen[i][j] = ' ';

        }

    //����������� ��������� �������� ������� �� ���� ������

    for (i = 0; i < SCREENW; ++i) {

        j = (int)floor((ymax - y[i]) / hy + 0.5);

        screen[i][j] = '*';

    }

    //������ ������� ��������

    for (j = 0; j < SCREENH; ++j) {

        for (i = 0; i < SCREENW; ++i)  putchar(screen[i][j]);

        putchar('\n');

    }

}



