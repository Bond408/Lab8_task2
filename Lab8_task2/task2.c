#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void)
{
    setlocale(LC_ALL, "RUS");
    float x;
    printf("¬ведите шаг: ");
    scanf_s("%f", &x);
    char h = 'x';
    char f = 'f';


    printf("---------------------\n");
    printf("|%-6c|%9c(x)|\n", h, f);
    printf("---------------------\n");

    for (float i = 2; i <= 4; i = i + x)
    {
        float x2 = pow(2, i);
        float x3 = 2 * pow(i, 2);
        float y = x2 - x3 - 1;
        printf("|%-6.1f|%12.2f|\n", i, y);
        printf("---------------------\n");
    }








}