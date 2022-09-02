#include <stdio.h>
int help(int *arr, int n, int j, int sum)
{
    if (sum <= 0 || j == n)
    {
        if (sum == 0)
        {
            return 1;
        }
        return 0;
    }
    if (help(arr, n, j + 1, sum - arr[j]))
        return 1;
    if (help(arr, n, j + 1, sum))
        return 1;
    return 0;
}
int main()
{
    int n, sum = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    if (sum % 2 == 1)
    {
        printf("false");
        return 0;
    }
    if (help(arr, n, 0, sum))
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    return 0;
}