#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *str)
{
    while (*str != '\0')
    {
        ft_putchar(*str);
        str++;
    }
}

void print_tab(int tab[], int n)
{
    int i = 0;
    while (i < n)
    {
        printf("%d", tab[i]);
        i++;
    }
}

void verif(int tab[], int n, int *j)
{
    int i = 0;
    while (i < n - 1)
    {
        if (tab[i] >= tab[i + 1])
        {
            *j = 2;
            break;
        }
        i++;
    }
}

void ft_print_combn(int n)
{

    int i = 0;
    int j = 1;
    int tab[n];

    if (n < 1 || n > 9)
    {
        char *message = "Impossible vous avez tapé un chiffre non compris entre ]0;4[\n";
        ft_putstr(message);
        return;
    }

    while (i < n)
    {
        tab[i] = 0;
        i++;
    }

    while (1 == 1)
    {
        i = n - 1;
        int retenue = 1;
        while (i >= 0)
        {
            if (retenue == 1 && tab[i] < 9)
            {
                tab[i]++;
                retenue = 0;
            }
            else if (retenue == 1 && tab[i] == 9)
            {
                tab[i] = 0;
            }
            i--;
        }

        j = 1;

        verif(tab, n, &j);

        if (j == 1)
        {
            print_tab(tab, n);
            printf(", ");

        }

        

        i = 0;
        j = 1;
        while (i < n)
        {
            if (tab[i] != 9)
                j = 2;
            i++;
        }
        if (j == 1)
            break;
    }
}

int main()
{
    int d;
    char *message = "combinaisons de 0 a 3 :\n";
    ft_putstr(message);
    scanf("%d", &d);
    ft_print_combn(d);
    return 0;
}
