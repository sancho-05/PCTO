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

  if ((a+b)>c && (b+c)>a && (a+c)>b)
  {
    printf("è un triangolo");
  }

  else
  {
    printf("non è un triangolo");
  }


}