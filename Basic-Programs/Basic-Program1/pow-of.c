#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int ans = 1;
    while (b--)
    {
        ans *= a;
    }
    printf("%d", ans);
    return 0;
}