#include <stdio.h>

int main()
 {
    int x;
    int y;
    int z; 

    z = 0; 
    printf("Inserisci un numero positivo: ");
    scanf("%d", &x);
    
    while(x>0) 
    {
        printf("Inserisci un numero: ");
        scanf("%d", &y);
        z= z + y ;
        x = x - 1;
    }
    
    printf("La somma degli interi inseriti e': %d", z);
    
    return 0;
}



