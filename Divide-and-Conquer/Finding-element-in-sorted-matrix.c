#include <stdio.h>

int binary_search(int *arr, int x, int low, int high, int mid)
{
    if (low > high)
        return -1;
    if (arr[mid] == x)
        return 1;
    else if (arr[mid] > x)
        return binary_search(arr, x, low, mid - 1, (low + mid - 1) / 2);
    else
        return binary_search(arr, x, mid + 1, high, (high + mid + 1) / 2);
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n * n];
    for (int i = 0; i < n * n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int x;
    scanf("%d", &x);
    if (binary_search(arr, x, 0, n * n - 1, n * n / 2)==1)
    {
        printf("FOUND");
    }
    else
    {
        printf("NOT FOUND");
    }
    return 0;
}