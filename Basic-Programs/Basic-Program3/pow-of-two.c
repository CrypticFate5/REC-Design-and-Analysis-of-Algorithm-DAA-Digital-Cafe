#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if ((n & (n - 1)) == 0)
    {
        printf("%d is a number that can be expressed as power of 2.", n);
    }
    else
    {
        printf("%d cannot be expressed as power of 2.", n);
    }
    return 0;
}