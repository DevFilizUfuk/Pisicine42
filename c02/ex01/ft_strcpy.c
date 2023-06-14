#include <string.h>
#include <stdio.h>

char *ft_strcpy(char *dest, const char *src)
{
    char *destd = dest;
    while (*src != '\0') {
        *dest = *src; 
        dest++; 
        src++;       
    }

    *dest = '\0';
    return destd;
}

int main()
{
    char dest[] = "Ufuk";
    const char *src = "FURUTUURUUR";
    printf("%s, %s\n", dest, src);
    ft_strcpy(dest, src);
    printf("%s\n", dest);

    return 0;
}
