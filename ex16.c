#include <stdio.h>
int main()

{
int numero;
printf("dimmi un numero");
scanf("%d", &numero); 

int divisore= numero-1;
while (divisore>1)
{
    if (numero % divisore==0)
    {
        printf("non è un numero primo perchè lo divide %d\n", divisore);
        break;
    }
    divisore--;
}
if (divisore==1)
printf("è un numero primo");


}