#include <stdio.h>
int main()
{
int i= 0;
int a[6];
while (i<6)
{
    a[i]=i;
    printf("%d", a[i]);
    i= i+2;
}
}