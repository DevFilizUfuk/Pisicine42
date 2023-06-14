#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *str) {
    while (*str != '\0') {
        ft_putchar(*str);
        str++;
    }
}

int main() {
    char *message = "VIVE 42\n";
    ft_putstr(message);
    return 0;
}
