#include <string.h>
#include <stdio.h>

int ft_strcmp(const char *s1, const char *s2)
{
    while (*s1 && (*s1 == *s2))
    {
        s1++;
        s2++;
    }

    return *(unsigned char *)s1 - *(unsigned char *)s2;
}

int ft_strlen(char *str)
{
    int l = 0;

    while (*str != '\0')
    {
        l++;
        str++;
    }

    return l;
}

char *ft_strstr(char *str, char *to_find)
{
    int len1, len2, i, j;

    if (ft_strcmp(str, "") == 0)
        return NULL;
    if (ft_strcmp(to_find, "") == 0)
        return str;

    len1 = ft_strlen(str);
    len2 = ft_strlen(to_find);

    if (len1 >= len2)
    {
        i = 0;
        j = 0;
        while (str[i] != '\0')
        {
            printf("Str = %c, Tofind = %c\n", str[i], to_find[j]);
            if (to_find[j] == str[i])
            {
                j++;
                if (to_find[j] == '\0')
                    return str;
            }
            else if (to_find[j] != str[i])
            {
                j++;
                if (to_find[j] == str[i])
                    return str;
            }
            else
                return NULL;

            i++;
        }
    }
    else
        return NULL;
    return to_find;
}

int main()
{
    char *s1 = "dssd";
    char *s2 = "dssd";
    char *result;

    result = strstr(s1, s2);

    printf("vrai ft %s\n", result);

    result = 0;

    result = ft_strstr(s1, s2);

    printf("mon ft %s\n", result);

    return (0);
}
