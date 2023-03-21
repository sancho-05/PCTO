#include <stdio.h>
int main()

{
int a;
printf("dimmi il tuo anno di nascita");
scanf("%d", &a); 

int b= a-1969;
int c= 1969-a;

if (a==1969)
{
   printf("sei nato lo stesso anno dello sbarco sulla luna");
}
 else if (a>1969)
 {
    printf("sei nato di %d\n dopo lo sbarco sulla luna", b);
 }

else 
{
    printf("sei nato di %d\n prima dello sbarco sulla luna", c);
}

}