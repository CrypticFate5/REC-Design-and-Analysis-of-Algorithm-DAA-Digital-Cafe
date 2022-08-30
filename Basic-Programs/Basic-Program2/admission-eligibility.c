#include <stdio.h>
int main()
{
    int m, p, c, total;
    scanf("%d %d %d", &m, &p, &c);
    total = m + p + c;
    if (m >= 65 && p >= 55 && c >= 50)
    {
        printf("The candidate is eligible");
    }
    else if (total >= 180)
    {
        printf("The candidate is eligible");
    }
    else
    {
        printf("The candidate is not eligible");
    }
    return 0;
}