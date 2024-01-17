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
double FXI1(double h, int numb, double xn, double xk);
double FXI2(double h, int numb, double xn, double xk);

double Gran = 25;
double MGran = -25;

int main() {

    int Var = 0;
    int numb,Part;
    double x,h,xn,xk;

    setlocale(LC_ALL, "RUS");

    while (Var !=6) {

        puts("\n\n����������� ���� ������������");
        puts("���� ���������\n�������� �����");
        puts("1. �������� ������� F1(x)");
        puts("2. �������� ������� F2(x)");
        puts("3. ��������� �������� ������� F1(x) �� �������� ���������");
        puts("4. ��������� �������� ������� F2(x) �� �������� ���������");
        puts("5. ��������� ������ F1(x) ��� F2(x)");
        puts("6. ���������� ������");

        scanf("%d",&Var);

        switch (Var) {

        case 1:

            puts("������� �������� x");
            scanf("%lf",&x);
            if (x == 0) {
                puts("��������� �������� ������� �� ������� ���");
                break;
            }
            double f = fun1(x);
            printf("----------------------------");
            printf("\n|x=%lf|F1(x)=%lf|",x,f);
            printf("\n----------------------------");
            break;

        case 2:

            puts("������� �������� x");
            scanf("%lf",&x);
            if (x == 0) {
                puts("��������� �������� ������� �� ������� ���");
                break;
            }
            double f1 = fun2(x);
            printf("----------------------------");
            printf("\n|x=%lf|F1(x)=%lf|",x,f1);
            printf("\n----------------------------");
            break;

        case 3:

            puts("������� �������� ����� ���������:\n1: (xn,xk)\n2: [xn,xk)\n3: (xn,xk]\n4: [xn,xk]");
            scanf("%i", &numb);
            puts("������� �������� ���� h");
            scanf("%lf",&h);

            puts("������� �������� xn");
            scanf("%lf",&xn);
            puts("������� �������� xk");
            scanf("%lf",&xk);

            FXI1(h,numb,xn,xk);
            break;

        case 4:

            puts("������� �������� ����� ���������:\n1: (xn,xk)\n2: [xn,xk)\n3: (xn,xk]\n4: [xn,xk]");
            scanf("%i",&numb);
            puts("������� �������� ���� h");
            scanf("%lf", &h);

            puts("������� �������� xn");
            scanf("%lf",&xn);
            puts("������� �������� xk");
            scanf("%lf",&xk);

            FXI2(h,numb,xn,xk);
            break;

        case 5:

            puts("�������� ������� F1(x) ��� F2(x)");
            puts("\n������(1): \n\nY(x) = x ^ 2 - PI * x * cos(PI * x)\n");
            puts("������(2): \n\n\t(1 + x + pow(x, 2)) / (1 + pow(x,2)), ���� � < 0");
            puts("V(x) =  sqrt(1 + ((2 * x) / (1 + pow(x, 2)))), ���� 0 <= x<1\n\t2 * abs(0.5 + sin(x)), ���� x >= 1");


            puts("\n������� ����� ��������� ���� ������� (�����):");
            scanf("%i",&Part);

            puts("������� �������� x");
            scanf("%lf",&x);

            if (Part == 1) plot(x, -x, fun1);
            if (Part == 2) plot(x, -x, fun2);
            break;

        case 6:
            break;

        default:
            puts("��� ������ ������ ������ ��������� ���� ������� ������������ ��������");
        }
    }
    return 1;
}

double FXI1(double h,int numb, double xn, double xk) {


    double F1_gran = Gran; //� �������� �������� ��� ��������� ������������ ���������� ������� ������������ ���������� ���������� Gran = 15;
    double F1_gran_2 = MGran;
    
    double x1n = xn;
    double x1k = xk;
    double d;


    switch (numb)
    {
    case 1:             //(xn,xk) 

        puts("-------------------");

        do
        {

            d = fun1(F1_gran_2);
            printf("\n|%lf|%lf|", F1_gran_2, d);
            F1_gran_2 += h;

        } while (F1_gran_2 <= xn);

        do
        {

            d = fun1(x1k);
            printf("\n|%lf|%lf|", x1k, d);
            x1k += h;

        } while (x1k <= F1_gran);

        puts("\n-------------------");
        break;

    case 2:             //[xn,xk) 

        puts("\n-------------------");

        do
        {

            d = fun1(x1n);
            printf("\n|%lf|%lf|", x1n, d);
            x1n += h;

        } while (x1n <= xk);
        do
        {

            x1k += h;
            d = fun1(x1k);
            printf("\n|%lf|%lf|", x1k, d);
        
        } while (x1k <= F1_gran);

        puts("\n-------------------");
        break;

    case 3:             //(xn,xk]

        puts("-------------------");

        do
        {

            d = fun1(F1_gran_2);
            printf("\n|%lf|%lf|", F1_gran_2, d);
            F1_gran_2 += h;

        } while (F1_gran_2 <= xn);
        do
        {
        
            d = fun1(x1n);
            printf("\n|%lf|%lf|", x1n, d);
            x1n += h;
        
        } while (x1n <= xk);

        puts("\n-------------------");
        break;

    case 4:                //[xn;xk]

        puts("-------------------");

        do
        {
            d = fun1(x1n);
            printf("\n|%lf|%lf|", x1n, d);
            x1n += h;

        } while (x1n <= xk);

        puts("\n-------------------");
        break;

    default: 
        puts("��������� ����� �� ����������");
        break;
    }
    return 1;
}

double FXI2(double h, int numb, double xn, double xk) {

    double F1_gran = Gran; //� �������� �������� ��� ��������� ������������ ���������� ������� ������������ ���������� ���������� Gran = 15;
    double F1_gran_2 = MGran;

    double x1n = xn;
    double x1k = xk;
    double d;

    switch (numb)
    {
    case 1:             //(xn,xk) 

        puts("-------------------");

        do
        {

            d = fun2(F1_gran_2);
            printf("\n|%lf|%lf|", F1_gran_2, d);
            F1_gran_2 += h;

        } while (F1_gran_2 <= xn);

        do
        {

            d = fun2(x1k);
            printf("\n|%lf|%lf|", x1k, d);
            x1k += h;

        } while (x1k <= F1_gran);

        puts("\n-------------------");
        break;

    case 2:             //[xn,xk) 

        puts("\n-------------------");

        do
        {

            d = fun2(x1n);
            printf("\n|%lf|%lf|", x1n, d);
            x1n += h;

        } while (x1n <= xk);
        do
        {

            x1k += h;
            d = fun2(x1k);
            printf("\n|%lf|%lf|", x1k, d);

        } while (x1k <= F1_gran);

        puts("\n-------------------");
        break;

    case 3:             //(xn,xk]

        puts("-------------------");

        do
        {

            d = fun2(F1_gran_2);
            printf("\n|%lf|%lf|", F1_gran_2, d);
            F1_gran_2 += h;

        } while (F1_gran_2 <= xn);
        do
        {

            d = fun2(x1n);
            printf("\n|%lf|%lf|", x1n, d);
            x1n += h;

        } while (x1n <= xk);

        puts("\n-------------------");
        break;

    case 4:                //[xn;xk]

        puts("-------------------");

        do
        {
            d = fun2(x1n);
            printf("\n|%lf|%lf|", x1n, d);
            x1n += h;

        } while (x1n <= xk);

        puts("\n-------------------");
        break;

    default:
        puts("��������� ����� �� ����������");
        break;
    }
    return 1;
}

double fun1(double x) { return pow(x,2)-PI*x*cos(PI*x); }

double fun2(double x) { 

     if (x < 0)  return (1 + x + pow(x, 2)) / (1 + pow(x, 2));

     if (x >= 0 || x < 1)  return sqrt(1 + (2 * x) / (1 + pow(x, 2)));

     if (x >= 1)  return 2 * abs(0.5 + sin(x));

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
