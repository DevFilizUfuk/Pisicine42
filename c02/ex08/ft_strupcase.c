#include <stdio.h>

char *ft_strupcase(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 'a' - 'A';
        }
        i++;
    }

    return str;
}

int main()
{
    char *result;
    char str[] = "dsas";
    printf("%s\n", str);
    result = ft_strupcase(str);
    printf("%s\n", result);

    return 0;
}