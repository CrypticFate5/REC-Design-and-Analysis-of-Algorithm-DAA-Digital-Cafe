#include <stdio.h>
int main()
{
    int a, b, n;
    scanf("%d %d %d", &a, &b, &n);
    for (int i = a; i <= b; i++)
    {
        if (i % n != 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}