#include <stdio.h>

void find(int *arr, int *c, int low, int high, int mid)
{
    if (arr[mid] == 0 && low <= high)
    {
        (*c)++;
        find(arr, c, low, mid - 1, (low + mid - 1) / 2);
    }
    if (low <= high)
    {
        find(arr, c, mid + 1, high, (mid + 1 + high) / 2);
    }
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
    int c = 0;
    find(arr, &c, 0, n - 1, n / 2);
    printf("%d", c);
    return 0;
}