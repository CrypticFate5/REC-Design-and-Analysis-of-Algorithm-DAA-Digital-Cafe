#include <stdio.h>
void sort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int power(int a)
{
    if (a == 0)
        return 1;
    return 3 * power(a - 1);
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
    sort(arr, n);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += power(i) * arr[i];
    }
    printf("%d", ans);
}