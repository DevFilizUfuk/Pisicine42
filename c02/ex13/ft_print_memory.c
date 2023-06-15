#include <stdio.h>
#include <unistd.h>

void *ft_print_memory(void *addr, unsigned int size)
{
    unsigned char *ptr = (unsigned char *)addr;
    unsigned int i, j;

    // Affichages carac
    j = 0;

    if (j >= 32 && j <= 126)
        write(1, &j, 1);
    else
        write(1, ".", 1);
}

int main()
{

    ft_print_memory();
    return 0;
}