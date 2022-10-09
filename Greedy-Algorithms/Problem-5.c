#include <stdio.h>
#include <stdlib.h>
void sort(int *arr, int n)
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
int main()
{
    int n, m, min = 0, max = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &m);
    sort(arr, n);
    int k = n;
    for (int i = 0; i < k; i++)
    {
        k -= m;
        min += arr[i];
    }
    k = 0;
    for (int i = n - 1; i >= k; i--)
    {
        k += m;
        max += arr[i];
    }
    printf("%d\n%d", min, max);
    return 0;
}