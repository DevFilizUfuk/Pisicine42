#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr_non_printable(char *str) {
    char *base = "0123456789abcdef";

    while (*str != '\0') {
        if (*str < 32 || *str > 126) {
            ft_putchar('\\');
            ft_putchar(base[(*str) / 16]);
            ft_putchar(base[(*str) % 16]);
        } else {
            ft_putchar(*str);
        }
        str++;
    }
}

int main() {
    char *message = "Coucou\ntu vas bien ?";
    ft_putstr_non_printable(message);
    return 0;
}
