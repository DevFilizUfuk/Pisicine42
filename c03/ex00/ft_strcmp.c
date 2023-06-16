#include <stdio.h>
#include <string.h>

int ft_strcmp(const char *s1, const char *s2)
{
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }

    return *(unsigned char*)s1 - *(unsigned char*)s2;
}

int main()
{
    char s1[] = "q";
    char s2[] = "q";
    char s3[] = "Abcdsd";
    int result;

    result = ft_strcmp(s1, s2);
    printf("%d\n", result);

    result = strcmp(s1, s2);
    printf("%d\n", result);

    //result = ft_strcmp(s2, s3);
    //printf("%d\n", result); 
    return 0;
}
