#include <stdio.h>
#include <string.h>

unsigned int ft_strlcpy(char *dest, const char *src, unsigned int size)
{
    unsigned int i = 0;
    while (i < size - 1 && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';
    return i;
}

int main()
{
    int n = 30;
    char dest[20] = "Ufukadsdasdasd";
    const char *src = "JHFKTJ";
    size_t size = ft_strlcpy(dest, src, n);
    printf("%zd\n", size);

    return 0;
}
