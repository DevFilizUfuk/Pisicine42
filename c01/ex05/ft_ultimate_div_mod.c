#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
    int temp = *a;

    *a = temp / *b;
    *b = temp % *b;
}


int main()
{
    int a = 12;
    int b = 5;

    printf("a= %d | b= %d\n", a, b);

    ft_ultimate_div_mod(&a, &b);
    
    printf("a= %d | b= %d\n", a, b);
    return 0;
}
