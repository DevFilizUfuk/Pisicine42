#include <stdio.h>

int is_alpha(int c)
{
    return ((c >= 'A' && c <= 'Z'));
}

int ft_str_is_uppercase(char *str)
{
    if (*str == '\0') {
        return 1;
    }

    while (*str != '\0') {
        if (!is_alpha(*str)) {
            return 0; 
        }
        str++; 
    }

    return 1; 
}

int main()
{
    int result;
    int d;
    char str[50];
    scanf("%s", str);
    result = ft_str_is_uppercase(str);
    printf("%d\n", result);

    return 0;
}
