#include <stdio.h>
int main()
{
    char C;
    scanf("%c", &C);

    if (C >= 'a' && C <= 'z' )
    {
        printf("%c", C - 32);
    }else
    {
        printf("%c", C + 32);
    }
    return 0;
}