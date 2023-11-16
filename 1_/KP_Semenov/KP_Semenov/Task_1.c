#include <stdio.h>
#include <math.h>

#define M_PI 3.14159265358979323846 //Число PI

char grid[28][56];

int plot(int x, int y);
void init_grid(void);
void show_grid(void);

int main()
{
    float x, y;

    init_grid();
    for (x = -M_PI; x <= M_PI; x += 0.3)
    {
        //y = pow(x, 2) - M_PI * x * cos(M_PI * x);
        y = cos(x);
        //plot(rintf(x), rintf(y)); 
        //plot(x,y);
        plot(x, pow(x, 2) - M_PI * x * cos(M_PI * x));
    }
    show_grid();
    system("pause");
    return 0;
}

/* Устанавливаем «пиксель» по определенным координатам */

int plot(int x, int y)
{
    int WIDTH = 56;
    int HEIGHT = 28;
    int X = WIDTH / 2;
    int Y = HEIGHT / 2;
   
    if (x > WIDTH - X - 1 || x < -(WIDTH - X) || y > HEIGHT - Y || y < -(HEIGHT - Y) + 1)
     return 1;
    grid[Y - y][X + x] = '+'; // '°';
    return 1;
}

/* Инициализируем сетку */

void init_grid(void)
{
    int x, y;
    int WIDTH = 56;
    int HEIGHT = 28;
    int X = WIDTH / 2;
    int Y = HEIGHT / 2;


    for (y = 0; y < HEIGHT; y++)
        for (x = 0; x < WIDTH; x++)
            grid[y][x] = ' ';

    /* рисуем ось */

    for (y = 0; y < HEIGHT; y++)

        grid[y][X] = '|';
    for (x = 0; x < WIDTH; x++)

        grid[Y][x] = '_';
    grid[Y][X] = '+';
}

/* отображение сетки */

void show_grid(void)
{
    int x, y;
    int WIDTH = 56;
    int HEIGHT = 28;
    int X = WIDTH / 2;
    int Y = HEIGHT / 2;

    for (y = 0; y < HEIGHT; y++)
    {
        for (x = 0; x < WIDTH; x++)
            putchar(WIDTH / 2, HEIGHT / 2);
       putchar('\n');
    }
}