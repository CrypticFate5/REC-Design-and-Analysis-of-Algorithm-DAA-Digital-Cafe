#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int help(int *arr, int n, int *map, int j, int x)
{
    if (j == 2)
    {
        if (x == 0)
        {
            return 1;
        }
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        if (map[i] == 0)
        {
            map[i] = 1;
            x -= arr[i];
            if (help(arr, n, map, j + 1, x))
                return 1;
            ;
            map[i] = 0;
            x += arr[i];
        }
    }
    return 0;
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
    int map[n];
    memset(map, 0, sizeof(map));
    if (help(arr, n, map, 0, x))
    {
        for (int i = 0; i < n; i++)
        {
            if (map[i] == 1)
            {
                printf("%d\n", arr[i]);
            }
        }
    }
    else
    {
        printf("No");
    }
    return 0;
}