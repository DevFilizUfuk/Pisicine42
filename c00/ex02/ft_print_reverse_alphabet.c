#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
    char c = 'z';

    while (c >= 97) {
        write(1, &c, 1);
        write(1, ", \n", 2);
        c--;
    }
}

int main () {
    ft_print_reverse_alphabet();

    return (0);
}