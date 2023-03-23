# include  < stdio.h >

int  primo ( int x)
{
    int y = x- 1 ;
    mentre (y> 1 )
    {
    se (x%y== 0 )
    {
      ritorno ( 0 );
    }
    y--;
    }
    se (y== 1 )
    {
        ritorno ( 1 );
    }
}

 int  principale ()
{
  int w;
    printf ( " inserisci un numero " );
    scanf ( " %d " , &w);
    int a [w];
    int io= 0 ;
    intero p = 2 ;
    mentre (i<w)
    {
        se ( primo (p))
        {
            a[io]=p;
            printf ( " array %d \n " , a[i]);
            io++;
        }
        p++;
    }
}