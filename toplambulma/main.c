#include <stdio.h>
#include <stdlib.h>

int sum(int n)
{
    if(n == 0)
        return 0;

    else
        return(n + sum(n-1));
}

int main(void)
{
    int a;
    printf("Sayi giriniz:");
    scanf("%d", &a);

    printf("Toplam = %d", sum(a));

    return 0;
}
