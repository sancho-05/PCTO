#include <stdio.h>
int main()
{
 int x;
    int y;
    printf("inserisci un numero");
    scanf("%d", &x);
    printf("x: %d\n", x);

    printf ("inserisci un numero");
    scanf("%d", &y);
    printf ("y: %d\n" , y);

if(x%y==0)
{
    printf("x è multiplo di y"); 
}

else
{

    printf("x non è multiplo di y");
}
}