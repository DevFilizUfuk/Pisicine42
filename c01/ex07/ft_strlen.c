#include <stdio.h>

int ft_strlen(char *str) {
    int l = 0;
    
    while (*str != '\0') {
        l++;
        str++;
    }
    
    return l;
}

int main() {
    char str[] = "UFUK LE GOAT";
    int l1 = ft_strlen(str);
    
    printf("Longueur | %d\n", l1);
    
    return 0;
}
