#include <stdio.h>
#include <string.h>

#include <stddef.h>

char *ft_strncat(char *dest, const char *src, unsigned int nb)
{
    char *temp = dest;

    while (*dest)
        dest++;

    while (*src && nb > 0)
    {
        *dest = *src;
        dest++;
        src++;
        nb--;
    }

    *dest = '\0';

    return temp;
}

int main()
{
    char s1[100] = "sAbcdsdeeegggwe";
    char s2[] = "Abcdsdeeegggew";
    char s3[] = "Abcdsd";
    unsigned int nb = 6;

    ft_strncat(s1, s2, nb);

    printf("%s\n", s1);

    return 0;
}
