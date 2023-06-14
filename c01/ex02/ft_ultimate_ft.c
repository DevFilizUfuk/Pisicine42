#include <stdio.h>

void ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42;
}

int main()
{
    int nbr = 0;
    int *point = &nbr;
    int **point1 = &point;
    int ***point2 = &point1;
    int ****point3 = &point2;
    int *****point4 = &point3;
    int ******point5 = &point4;
    int *******point6 = &point5;
    int ********point7 = &point6;
    int *********point8 = &point7;

    ft_ultimate_ft(point8);
    printf("%d\n", nbr);
    return 0;
}