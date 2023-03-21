#include <stdio.h>
int main()

{

int a;
printf("inserisci un anno");
scanf("%d", &a); 
printf("X: %d\n", a);

if(a%4==0 && a%100==0 && a%400==0)
{
    printf("bisestile"); 
}
else
{
    printf("non bisestile");
}

}


