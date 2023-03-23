#include <stdio.h>

int ft_strlen(char *str)
{
    int i =0;
    while(str[i] != 0)
    {
        i = i + 1;
    }
return (i);

}



int main()
{
    int i;
    char a[] = "alessandro";
    i= ft_strlen(a);
    printf("La parola %s è composta da %d lettere\n", a, i);
}
