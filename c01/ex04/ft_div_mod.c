#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{

    *div = a / b; 
    *mod = a % b;

}

int main()
{
    int nbr1 = 12;
    int nbr2 = 5;

    int div;
    int mod;

    printf("a= %d | b= %d\n", nbr1, nbr2);
    ft_div_mod(nbr1, nbr2, &div, &mod);

    printf("a= %d | b= %d // result = %d . reste = %d\n", nbr1, nbr2, div, mod);
    return 0;
}
