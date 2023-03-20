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
    

    int somma= x+y;
    int sottrazione= x-y;
    int moltiplicazione= x*y;
    int quoziente= x/y;
    int resto= x%y;

    printf("somma: %d\n sottrazione:  %d\n moltiplicazione: %d\n quoziente: %d\n resto: %d\n", somma,sottrazione, moltiplicazione, quoziente, resto);
}