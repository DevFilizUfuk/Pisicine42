#include <stdio.h>
#include <string.h>

int ft_strncmp(const char *s1, const char *s2, size_t n) {
    if (n == 0) {
        return 0;
    }

    while (*s1 && (*s1 == *s2) && n > 1) {
        s1++;
        s2++;
        n--;
    }
    
    return *(unsigned char *)s1 - *(unsigned char *)s2;
}


int main()
{
    char s1[] = "Abcdef";
    char s2[] = "abcde";
    char s3[] = "Abcdsd";
    int n = 5;
    int result;


    result = ft_strncmp(s1, s2, n);
    printf("%d\n", result);

    result = 0;

    result = strncmp(s1, s2, n);
    printf("%d\n", result);


    //result = ft_strncmp(s2, s3, n);
    //printf("%d\n", result); 
    return 0;
}
