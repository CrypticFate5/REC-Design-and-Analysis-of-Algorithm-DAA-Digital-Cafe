#include <stdio.h>

int main()
{
    int n, ans = 0;
    scanf("%d", &n);
    int arr[] = {1000, 500, 100, 50, 20, 10, 5, 2, 1};
    for (int i = 0; i < 9; i++)
    {
        if ((arr[i] % n) == arr[i])
        {
            n -= arr[i];
            i = 0;
            ans++;
        }
        if (n == 0)
        {
            break;
        }
    }
    printf("%d", ans);
    return 0;
}