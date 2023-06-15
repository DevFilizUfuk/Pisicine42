#include <stdio.h>

int is_alpha(int c)
{    
    return ((c >= 32 && c <= 126));
}

int ft_str_is_printable(char *str)
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
    char str[50] = "BFJS";
    str[2] = 90;
    printf("%s\n", str);
    result = ft_str_is_printable(str);
    printf("%d\n", result);

    return 0;
}
