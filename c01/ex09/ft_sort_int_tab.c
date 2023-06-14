#include <stdio.h>



void ft_swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;

}

void ft_sort_int_tab(int *tab, int size)
{
    int i = 0;
    while (i < size - 1) {
        int j = 0;
        while (j < size - i - 1) {
            if (tab[j] > tab[j + 1]) {
                ft_swap(&tab[j], &tab[j + 1]);
            }
            j++;
        }
        i++;
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

    ft_sort_int_tab(tab, size);

    printf("\nTableau <- : ");

    int j = 0;
    while (j < size) 
    {
        printf("%d ", tab[j]);
        j++;
    }

    return 0;
}
