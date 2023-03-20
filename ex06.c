#include <stdio.h>
int main()
{

int a;
printf("dimmi un numero");
scanf("%d", &a); 

if(a>50)
{   a/=2;
    printf("%d\n", a); 
}
else
{
    a*=3;
    printf("%d\n", a);
}
}