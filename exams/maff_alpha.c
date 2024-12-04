#include <unistd.h>

int main(void)
{
    char c;
    int i;

    i = 0;
    c = 'a';
    while (c <= 'z')
    {
        if (i % 2 == 0)
            write(1, &c, 1);
        else
        {
            char upper = c - 32;
            write(1, &upper, 1);
        }
        c++;
        i++;
    }
    write(1, "\n", 1);
    return 0;
}