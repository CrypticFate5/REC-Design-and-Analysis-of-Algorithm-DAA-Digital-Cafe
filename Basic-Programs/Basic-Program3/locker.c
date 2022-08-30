#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n + 1];
    for (int i = 1; i <= n; i++)
    {
        arr[i] = 0;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j % i == 0)
            {
                if (arr[j] == 0)
                {
                    arr[j] = 1;
                }
                else
                {
                    arr[j] = 0;
                }
            }
        }
    }
    int open = 0;
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] == 1)
        {
            open++;
        }
    }
    printf("open = %d\nclose = %d", open, abs(n - open));
    return 0;
}