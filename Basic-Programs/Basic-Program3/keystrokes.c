#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
void delete (char arr[], int n, int pos)
{
    for (int i = pos; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        fflush(stdin);
        char st[100];
        scanf("%[^\n]s", st);
        int len = strlen(st);
        for (int i = len - 1; i >= 0; i--)
        {
            if (st[i] == '^')
            {
                delete (st, len, i);
                len--;
                for (int j = i - 1; j >= 0; j--)
                {
                    if (isalpha(st[j]) || isspace(st[j]))
                    {
                        delete (st, len, j);
                        len--;
                        break;
                    }
                }
            }
        }
        if (len == 0)
        {
            printf("-1\n");
            continue;
        }
        for (int i = 0; i < len; i++)
        {
            printf("%c", st[i]);
        }
        printf("\n");
    }
    return 0;
}