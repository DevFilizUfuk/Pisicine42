#include <stdio.h>

char *ft_strcapitalize(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
    {
        if ((i == 0 && str[i] >= 'a' && str[i] <= 'z') || (str[i - 1] == ' ' && str[i] >= 'a' && str[i] <= 'z'))
        {
            str[i] = str[i] - 'a' + 'A';
        }
        else if ((str[i - 1] != ' ' && str[i] != ' ' && i != 0) && (str[i] >= 'A' && str[i] <= 'Z'))
        {
            str[i] = str[i] - 'A' + 'a';
        }
        i++;
    }

    return str;
}

int main()
{
    char *result;
    char str[] = "adsqw dsadasd qweqd AdsAQ";
    printf("%s\n", str);
    result = ft_strcapitalize(str);
    printf("%s\n", result);

    return 0;
}