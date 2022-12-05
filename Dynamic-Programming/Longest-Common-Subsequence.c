#include <stdio.h>
#include <string.h>

int max(int a, int b)
{
    if (a > b)
        return a;
    return b;
}
int help(int a, int b, char *x, char *y, int dp[][b + 1])
{
    if (a < 0 || b < 0)
        return 0;
    if (dp[a][b] != -1)
        return dp[a][b];
    if (x[a] == y[b])
        return 1 + help(a - 1, b - 1, x, y, dp);
    return dp[a][b] = max(help(a - 1, b, x, y, dp), help(a, b - 1, x, y, dp));
}
int main()
{
    char x[100], y[100];
    scanf("%s %s", x, y);
    int a = strlen(x), b = strlen(y);
    int dp[a][b];
    memset(dp, -1, sizeof(dp));
    printf("%d", help(strlen(x) - 1, strlen(y) - 1, x, y, dp));
    return 0;
}