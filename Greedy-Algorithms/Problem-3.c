#include <stdio.h>

int main()
{
    int n, count5 = 0, count10 = 0;
    scanf("%d", &n);
    int bills[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &bills[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (bills[i] == 5)
        {
            count5++;
        }
        else if (bills[i] == 10)
        {
            count10++;
            if (count5 > 0)
            {
                count5--;
            }
            else
            {
                printf("false");
                return 0;
            }
        }
        else if (bills[i] == 20)
        {
            if (count10 > 0 && count5 > 0)
            {
                count10--;
                count5--;
            }
            else if (count5 >= 3)
            {
                count5 -= 3;
            }
            else if (count5 < 0)
            {
                printf("false");
                return 0;
            }
        }
    }
    printf("true");
    return 0;
}