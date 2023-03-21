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

  if (a==b && b==c && a==c)
    {
        printf("triangolo equilatero");
    }

    else if ((a==b && c!=b) || (a!=b && c==b) || (c!=a && c==b));
    {
     printf ("scaleno");
    }
      
  }

  else
  {
    printf("non è un triangolo");
  }


}