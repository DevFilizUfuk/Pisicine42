#include <stdio.h>

int is_alpha(int c)
{
    return ((c >= '0' && c <= '9'));
}

int ft_str_is_numeric(char *str)
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
    result = ft_str_is_numeric(str);
    printf("%d\n", result);

    return 0;
}
