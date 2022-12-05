#include <stdio.h>
#include <limits.h>
#include <string.h>
int max(int a, int b)
{
    if (a > b)
        return a;
    return b;
}
int help(int *arr, int n, int i, int prev, int dp[][n + 1])
{
    if (i == n)
        return 0;
    if (dp[i][prev + 1] != -1)
        return dp[i][prev + 1];
    int l = help(arr, n, i + 1, prev, dp);
    int r = INT_MAX;
    if (prev == -1 || arr[i] >= arr[prev])
        r = 1 + help(arr, n, i + 1, i, dp);
    return dp[i][prev + 1] = max(l, r);
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int dp[n][n + 1];
    memset(dp, -1, sizeof(dp));
    int ans = help(arr, n, 0, -1, dp);
    printf("%d", ans);
    return 0;
}