#include <stdio.h>
int main()
{
    int N,X;
    scanf("%d", &N);

    for(int i =1 ; i<=12; i++)
    {
        X = N * i;
        printf("%d * %d = %d\n", N,i,X);
    }
    return 0;
}