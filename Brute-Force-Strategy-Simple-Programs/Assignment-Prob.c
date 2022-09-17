#include <stdio.h>

void assignment(int *initial, int row, int n, int j, int arr[][n], int sub, int *ans, int map[])
{
    if (j == n)
    {
        if ((*initial) == 1)
        {
            *initial = 0;
            (*ans) = sub;
        }
        else
        {
            if (sub < (*ans))
            {
                (*ans) = sub;
            }
        }
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (map[i] == 1)
        {
            map[i] = 0;
            sub += arr[row][i];
            assignment(initial, row + 1, n, j + 1, arr, sub, ans, map);
            map[i] = 1;
            sub -= arr[row][i];
        }
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int map[n];
    for (int i = 0; i < n; i++)
    {
        map[i] = 1;
    }
    int ans = 0, initial = 1;
    assignment(&initial, 0, n, 0, arr, 0, &ans, map);
    printf("%d", ans);
    return 0;
}