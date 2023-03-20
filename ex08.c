#include <stdio.h>
int main()
{
    float x;

    printf("inserisci una temperatura in celsius");
    scanf("%f", &x);
    //printf("x: %d\n", x);

 float fahrenheit =(9/5)*x +32;
 float kelvin= x+ 273.15;


 if(x<-273.15)

{
    printf("errore");
}
else
{
    printf("x: %f\n", fahrenheit);
    printf ("x: %f\n", kelvin);
 
}

}

