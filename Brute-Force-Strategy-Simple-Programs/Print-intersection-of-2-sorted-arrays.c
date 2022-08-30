#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y;
        scanf("%d", &x);
        int arr1[x];
        for (int i = 0; i < x; i++)
        {
            scanf("%d", &arr1[i]);
        }
        scanf("%d", &y);
        int arr2[y];
        for (int i = 0; i < y; i++)
        {
            scanf("%d", &arr2[i]);
        }
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                if (arr1[i] == arr2[j])
                {
                    printf("%d ", arr1[i]);
                    break;
                }
            }
        }
    }
    return 0;
}