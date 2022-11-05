#include <stdio.h>

int help(int *set, int n, int k, int j)
{
    if (k == 0 || j == n)
    {
        if (k == 0)
            return 1;
        return 0;
    }
    if (help(set, n, k - set[j], j + 1))
        return 1;
    if (help(set, n, k, j + 1))
        return 1;
    return 0;
}
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int set[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &set[i]);
    }
    if (help(set, n, k, 0))
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}