#include <stdio.h>
int main()
{
    int N,X;
    int maxX=0;
    scanf("%d", &N);
    for(int i=0;i<N;i++)
    {
        scanf("%d", &X);
        if(X>maxX)
        {
            maxX=X;
        }
    }
    printf("%d",maxX);
    return 0;
}