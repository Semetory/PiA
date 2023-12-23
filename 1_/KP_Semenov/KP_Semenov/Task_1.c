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

    puts("Приветствую тебя пользователь");
    puts("Данная программа строит график функции по введенным значениям x и y");

    puts("Выбирете исспользуемую формулу для построения графика функции, и введите её номер (1 или 2).");
    puts("Первая(1) : Y(x) = x ^ 2 - PI * x * cos(PI * x)");
    puts("Вторая (2): V(x) = \n(1 + x + pow(x, 2)) / (1 + pow(x,2)), если х < 0\n");
    puts("sqrt(1 + (2 * x) / (1 + pow(x, 2))), если 0 <= x<1\n2 * abs(0.5 + sin(x)), если x >= 1");

    puts("\nВведите номер:");
    scanf("%i", &Var);

    puts("Введите x и y");
    scanf("%lf%lf", &x, &y);

    switch (Var) {

    case 1:
        plot(x, y, fun1);
        break;
    case 2:
        plot(x, y, fun2);
        break;
    default:
        puts("При выборе номера функции была допущена ошибка");
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
   
    // int SCREENW = 60, SCREENH = 40;//размеры поля вывода в символах

    char screen[SCREENW][SCREENH];

    double x, y[SCREENW];

    double ymin = 0, ymax = 0;

    double hx, hy;

    int i, j;

    int xz, yz;

    hx = (x1 - x0) / (SCREENW - 1);

    for (i = 0, x = x0; i < SCREENW; ++i, x += hx) {

        y[i] = f(x); //расчет значений функции для каждой точки поля вывода графика

        if (y[i] < ymin) ymin = y[i];

        if (y[i] > ymax) ymax = y[i];

    }

    hy = (ymax - ymin) / (SCREENH - 1);

    yz = (int)floor(ymax / hy + 0.5);

    xz = (int)floor((0. - x0) / hx + 0.5);

    //построение осей и заполнение массива отображения пробелами

    for (j = 0; j < SCREENH; ++j)

        for (i = 0; i < SCREENW; ++i) {

            if (j == yz && i == xz) screen[i][j] = '+';

            else if (j == yz) screen[i][j] = '-';

            else if (i == xz) screen[i][j] = '|';

            else screen[i][j] = ' ';

        }

    //определение положения значения функции на поле вывода

    for (i = 0; i < SCREENW; ++i) {

        j = (int)floor((ymax - y[i]) / hy + 0.5);

        screen[i][j] = '*';

    }

    //печать массива символов

    for (j = 0; j < SCREENH; ++j) {

        for (i = 0; i < SCREENW; ++i)  putchar(screen[i][j]);

        putchar('\n');

    }

}



