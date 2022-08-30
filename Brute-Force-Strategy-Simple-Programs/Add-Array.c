#include <stdio.h>
int main()
{
    long int sub = 0, n, k, ans;
    scanf("%ld", &n);
    long int y = n;
    while (n--)
    {
        long int x, pos = 1;
        scanf("%ld", &x);
        for (int i = 0; i < n; i++)
        {
            pos *= 10;
        }
        sub += (pos * x);
    }
    scanf("%ld", &k);
    ans = k + sub;
    long int arrans[y + 10];
    long q = 0;
    while (ans > 0)
    {
        arrans[q] = ans % 10;
        ans /= 10;
        q++;
    }
    for (long int i = q - 1; i >= 0; i--)
    {
        printf("%ld ", arrans[i]);
    }
    return 0;
}