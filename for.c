#include <stdio.h>

int main() {
    char alphabet[27];
    int i;

    i = 0;
    while(i < 26) 
    {
        alphabet[i] = 'a' + i;
        i++;
    }

    alphabet[26] = '\0'; // Aggiungi il carattere terminatore di stringa

    printf("%s", alphabet);

    return 0;
}
