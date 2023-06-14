#include <unistd.h>

void ft_print_comb2(void)
{
    char a = '0';
    char b = '0';
    char c = '0';
    char d = '0';

    while (a <= '9')
    {
        while (b <= '9')
        {
            while (c <= '9')
            {
                while (d <= '9')
                {
                    write(1, &a, 1);
                    write(1, &b, 1);
                    write(1, " ", 1);
                    write(1, &c, 1);
                    write(1, &d, 1);
                    d++;
                    if (a == '9' && b == '9' && c == '9' && d == '9')
                        return;
                    write(1, ", ", (a != '9' || b != '8' || c != '9' || d != '9') ? 2 : 0);
                }
                d = '0';
                c++;
            }
            c = '0';
            b++;
        }
        b = '0';
        a++;
    }
}

int main()
{
    ft_print_comb2();
    return 0;
}
