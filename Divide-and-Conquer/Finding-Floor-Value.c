#include <stdio.h>

void help(int *arr, int n, int x, int *max, int low, int high, int mid)
{
    if (arr[mid] <= x && arr[mid] > (*max))
    {
        *max = arr[mid];
    }
    if (low > high)
        return;
    if (x < arr[mid])
        help(arr, n, x, max, low, mid - 1, (low + mid - 1) / 2);
    if (x > arr[mid])
        help(arr, n, x, max, mid + 1, high, (high + mid + 1) / 2);
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int x;
    scanf("%d", &x);
    int max = 0;
    help(arr, n, x, &max, 0, n - 1, n / 2);
    printf("%d", max);
    return 0;
}