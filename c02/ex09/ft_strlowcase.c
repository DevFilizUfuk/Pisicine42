#include <stdio.h>

char *ft_strlowcase(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] -= 'A' - 'a';
        }
        i++;
    }

    return str;
}

int main()
{
    char *result;
    char str[] = "DSASDA";
    printf("%s\n", str);
    result = ft_strlowcase(str);
    printf("%s\n", result);

    return 0;
}