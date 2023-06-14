#include <stdio.h>

void ft_swap(int *a, int *b)
{

    int temp = *a;
    *a = *b;
    *b = temp;

}
int main(int argc, char const *argv[])
{
    int a = 4;
    int b = 3;
    printf("%d, %d\n", a, b);
    ft_swap(&a, &b);
    printf("%d, %d\n", a, b);
    return 0;
}