#include <stdio.h>

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
    int x, y, ans = 0, k = 0;
    scanf("%d", &x);
    int child[x];
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &child[i]);
    }
    scanf("%d", &y);
    int cookies[y];
    for (int i = 0; i < y; i++)
    {
        scanf("%d", &cookies[i]);
    }
    sort(child, x);
    sort(cookies, y);
    for (int i = 0; i < x; i++)
    {
        for (int j = k; j < y; j++)
        {
            if (child[i] <= cookies[j])
            {
                ans++;
                k = j + 1;
                break;
            }
        }
    }
    printf("%d", ans);
    return 0;
}