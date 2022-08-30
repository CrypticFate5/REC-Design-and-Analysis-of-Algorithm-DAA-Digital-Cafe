#include <stdio.h>
int main()
{
    int x, y, quo, rem;
    scanf("%d %d", &x, &y);
    quo = x / y;
    rem = x % y;
    printf("%d\n%d", quo, rem);
    return 0;
}