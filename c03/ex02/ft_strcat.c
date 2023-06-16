#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src)
{
    char *temp = dest;

    while (*dest)
        dest++;

    while (*src)
    {
        *temp = *src;
        temp++;
        src++;
    }

    *temp = '\0';

    return dest;
}

int main()
{
    char s1[100] = "sAbcdsdeeegggwe";
    char s2[] = "Abcdsdeeegggew";
    char s3[] = "Abcdsd";

    printf("%s\n", s1);
    
    ft_strcat(s1, s2);

    printf("%s\n", s1);

    return 0;
}
