#include <unistd.h>

void ft_print_alphabet(void)
{
    char c = 'a';
    
    while (c <= 'z') {
        write(1, &c, 1);
        write(1, ", \n", 2);
        c++;
    }
}

int main () 
{
    ft_print_alphabet();

    return (0);
}
