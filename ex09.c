#include <stdio.h>
int main()
{
float a;
float b;
float c;
    printf("inserisci un numero");
    scanf("%f", &a);
    
    printf ("inserisci un numero");
    scanf("%f", &b);
    
  printf("inserisci un numero");
  scanf("%f", &c);

  if(a-b==b-c && c-a==a-b)
{
printf("sono in seguenza aritmetica");
}

else
{
    printf("non sono in seguenza aritmetica");
}



}