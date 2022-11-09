#include <stdio.h>
#include <limits.h>
void help(int *arr, int n, int j, int l, int prev, int *ans)
{
    if (j == n)
    {
        if (l > *ans)
            *ans = l;
        return;
    }
    if (arr[j] >= prev)
        help(arr, n, j + 1, l + 1, arr[j], ans);
    help(arr, n, j + 1, l, prev, ans);
}
int main()
{
    int n, ans = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    help(arr, n, 0, 0, INT_MIN, &ans);
    printf("%d", ans);
    return 0;
}