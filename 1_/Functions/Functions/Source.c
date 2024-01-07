/*#include <stdio.h>
#include <math.h>
#include <locale.h>

#define SCREENW 60
#define SCREENH 80
#define PI 3.14
#define M_E 2.72

typedef double (*TFun) (double);
void plot(double x0, double x1, TFun f);
double fun1(double x);
double fun2(double x);

int main() {

    double x, y;
    int Var = 0;

    setlocale(LC_ALL, "RUS");

    puts("Ïðèâåòñòâóþ òåáÿ ïîëüçîâàòåëü");
    puts("Äàííàÿ ïðîãðàììà ñòðîèò ãðàôèê ôóíêöèè ïî ââåäåííûì çíà÷åíèÿì x è y");

    puts("Âûáèðåòå èññïîëüçóåìóþ ôîðìóëó äëÿ ïîñòðîåíèÿ ãðàôèêà ôóíêöèè, è ââåäèòå å¸ íîìåð (1 èëè 2).");
    puts("Ïåðâàÿ(1) : Y(x) = x ^ 2 - PI * x * cos(PI * x)");
    puts("Âòîðàÿ (2): V(x) = \n(1 + x + pow(x, 2)) / (1 + pow(x,2)), åñëè õ < 0\n");
    puts("sqrt(1 + (2 * x) / (1 + pow(x, 2))), åñëè 0 <= x<1\n2 * abs(0.5 + sin(x)), åñëè x >= 1");

    puts("\nÂâåäèòå íîìåð:");
    scanf("%i", &Var);

    puts("Ââåäèòå x è y");
    scanf("%lf%lf", &x, &y);

    switch (Var) {

    case 1:
        plot(x, y, fun1);
        break;
    case 2:
        plot(x, y, fun2);
        break;
    default:
        puts("Ïðè âûáîðå íîìåðà ôóíêöèè áûëà äîïóùåíà îøèáêà");
        break;
    }

}

double fun1(double x) { return ((sin(pow(x, 2) + pow(x, -1) + pow(x, 1 / 3))) / tanh(pow(M_E, cos(sqrt(x))))) * pow(10, -6); }
double fun2(double x) {

    if (x > 2.5) return sin(2.3 * x - 1);
    if (0 <= x <= 2.5) return 1 - 3*log(abs(1-x));
    if (x < 0) return (2-x);

}

void plot(double x0, double x1, TFun f) {

    // int SCREENW = 60, SCREENH = 40;//ðàçìåðû ïîëÿ âûâîäà â ñèìâîëàõ

    char screen[SCREENW][SCREENH];

    double x, y[SCREENW];

    double ymin = 0, ymax = 0;

    double hx, hy;

    int i, j;

    int xz, yz;

    hx = (x1 - x0) / (SCREENW - 1);

    for (i = 0, x = x0; i < SCREENW; ++i, x += hx) {

        y[i] = f(x); //ðàñ÷åò çíà÷åíèé ôóíêöèè äëÿ êàæäîé òî÷êè ïîëÿ âûâîäà ãðàôèêà

        if (y[i] < ymin) ymin = y[i];

        if (y[i] > ymax) ymax = y[i];

    }

    hy = (ymax - ymin) / (SCREENH - 1);

    yz = (int)floor(ymax / hy + 0.5);

    xz = (int)floor((0. - x0) / hx + 0.5);

    //ïîñòðîåíèå îñåé è çàïîëíåíèå ìàññèâà îòîáðàæåíèÿ ïðîáåëàìè

    for (j = 0; j < SCREENH; ++j)

        for (i = 0; i < SCREENW; ++i) {

            if (j == yz && i == xz) screen[i][j] = '+';

            else if (j == yz) screen[i][j] = '-';

            else if (i == xz) screen[i][j] = '|';

            else screen[i][j] = ' ';

        }

    //îïðåäåëåíèå ïîëîæåíèÿ çíà÷åíèÿ ôóíêöèè íà ïîëå âûâîäà

    for (i = 0; i < SCREENW; ++i) {

        j = (int)floor((ymax - y[i]) / hy + 0.5);

        screen[i][j] = '*';

    }

    //ïå÷àòü ìàññèâà ñèìâîëîâ

    for (j = 0; j < SCREENH; ++j) {

        for (i = 0; i < SCREENW; ++i)  putchar(screen[i][j]);

        putchar('\n');

    }

}
*/