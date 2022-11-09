#include <stdio.h>
#include <string.h>

int max(int a, int b)
{
    if (a > b)
        return a;
    return b;
}
int help(int a, int b, char *x, char *y)
{
    if (a < 0 || b < 0)
        return 0;
    if (x[a] == y[b])
        return 1 + help(a - 1, b - 1, x, y);
    return max(help(a - 1, b, x, y), help(a, b - 1, x, y));
}
int main()
{
    char x[100], y[100];
    scanf("%s %s", x, y);
    printf("%d", help(strlen(x) - 1, strlen(y) - 1, x, y));
    return 0;
}