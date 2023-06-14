#include <stdio.h>


void ft_swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;

}

void ft_rev_int_tab(int *tab, int size)
{
    int d = 0;
    int f = size - 1;

    while (d < f)
    {
        ft_swap(&tab[d], &tab[f]);
        d++;
        f--;
    }
}

int main()
{
    int tab[] = {1, 2, 3, 4, 5};
    int size = sizeof(tab) / sizeof(tab[0]);

    printf("\nTableau -> : ");
    int i = 0;
    while (i < size)
    {
        printf("%d ", tab[i]);
        i++;
    }

    ft_rev_int_tab(tab, size);

    printf("\nTableau <- : ");

    int j = 0;
    while (j < size)
    {
        printf("%d ", tab[j]);
        j++;
    }

    return 0;
}