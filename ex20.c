#include <stdio.h>

int main()
{
    char x = 65;
    while(x > 64 && x < 91)
    {
        printf("%c\n", x);
        x = x + 1;
    }
}
