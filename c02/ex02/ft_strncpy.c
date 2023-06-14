#include <string.h>
#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int i = 0;
    char *destd = dest;
    while (i < n && src[i] != '\0') { 
        dest[i] = src[i];
        i++;        
    }

    dest[i] = '\0';
    return destd;
}

int main()
{
    int n = 10;
    char dest[] = "Ufuk";
    char *src = "JHFKTJFMFTFTKYDTYTYMTYMTYDJJYTKFGJFKGFSK";
    printf("%s, %s\n", dest, src);
    ft_strncpy(dest, src, n);
    printf("%s\n", dest);

    return 0;
}
