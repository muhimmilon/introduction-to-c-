#include <stdio.h>
int main()
{
    int N,num;
    int even = 0;
    int odd = 0;
    int positive = 0;
    int negetive = 0;
    scanf("%d", &N);
    for(int i =0 ;i<N;i++)
    {
        scanf("%d", &num);
        if(num % 2 == 0)
        {
            even++;
        }else{
            odd++;
        }

        if(num>0)
        {
            positive++;
        }else if(num<0)
        {
            negetive++;
        }

    }
    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", positive);
    printf("Negative: %d", negetive);
    return 0;
}