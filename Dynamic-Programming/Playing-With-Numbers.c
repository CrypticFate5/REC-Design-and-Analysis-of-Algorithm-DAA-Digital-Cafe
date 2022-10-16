#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    long long int prev1 = 1, prev2 = 1, prev3 = 1, curr;
    for (int i = 3; i <= n; i++)
    {
        curr = prev1 + prev3;
        prev3 = prev2;
        prev2 = prev1;
        prev1 = curr;
    }
    printf("%lld", prev1);
    return 0;
}