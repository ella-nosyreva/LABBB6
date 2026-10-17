#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "RUS");

    double x, y;

    printf("Введите координаты точки (x y): ");
    scanf("%lf %lf", &x, &y);

    if ((y <= x + 2) && (y <= -x + 8) && (y >= x - 2) && (y >= -x + 4))
    {
        if ((y <= x + 2) && (y <= -x + 8) && (y >= x - 2) && (y >= -x + 4))
        {
            printf("Точка (%.2lf, %.2lf) находится на границе области\n", x, y);
        }
        else
        {
            printf("Точка (%.2lf, %.2lf) принадлежит области\n", x, y);
        }
    }
    else
    {
        printf("Точка (%.2lf, %.2lf) не принадлежит области\n", x, y);
    }

    return 0;
}