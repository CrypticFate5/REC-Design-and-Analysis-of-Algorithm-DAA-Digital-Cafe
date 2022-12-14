#include <stdio.h>
#include <string.h>

int max(int a, int b)
{
    if (a > b)
        return a;
    return b;
}

int help(int n, int chess[][n], int i, int j, int dp[][n])
{
    if (i == n - 1 && j == n - 1)
        return chess[n - 1][n - 1];
    if (dp[i][j] != -1)
        return dp[i][j];
    int l = 0, r = 0;
    if (i < n - 1)
        l = chess[i][j] + help(n, chess, i + 1, j, dp);
    if (j < n - 1)
        r = chess[i][j] + help(n, chess, i, j + 1, dp);
    return dp[i][j] = max(l, r);
}

int main()
{
    int n;
    scanf("%d", &n);
    int chess[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            scanf("%d", &chess[i][j]);
    }
    int dp[n][n];
    memset(dp, -1, sizeof(dp));
    printf("%d", help(n, chess, 0, 0, dp));
    return 0;
}