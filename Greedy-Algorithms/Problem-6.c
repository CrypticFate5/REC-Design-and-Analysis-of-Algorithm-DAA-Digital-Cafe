#include <stdio.h>

void sort(int n, int *arr)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int min(int a, int b)
{
    if (a < b)
        return a;
    return b;
}
int max(int a, int b)
{
    if (a > b)
        return a;
    return b;
}
int main()
{
    int n, m;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &m);
    sort(n, arr);
    int ans = arr[n - 1] - arr[0];
    for (int i = 1; i < n; i++)
    {
        int x = max(arr[n - 1] - m, arr[i - 1] + m);
        int y = min(arr[0] + m, arr[i] - m);
        int d = x - y;
        if (d < 0)
            continue;
        ans = min(ans, d);
    }
    printf("%d", ans);
    return 0;
}