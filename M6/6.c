#include <stdio.h>
int main()
{
    int T,N;
    scanf("%d", &T);

    for(int i = 1 ; i <= T ; i++)
    {
        scanf("%d", &N);
        do
        {
            printf("%d ", N % 10);
            N /= 10;
        }
        while(N!=0);
        printf("\n");
    }
    return 0;
}