#include <stdio.h>

void stampa_caratteri(char *str)

{
    int i = 0;
    while(str[i]) != '\0')
    {
        printf("%c\n", str[i]);
        i++;
    }
}

printf("%s", str);

int main ()
{
    char *s= "daje roma daje";
    stampa_caratteri(s);
}  
