#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char st[1000000]; // declaring as 10 power 6 to avoid declarations of long int even though 10 power 8 is given as constraint
    scanf("%s", st);
    int x = 0;
    for (int i = 0; i < strlen(st); i++)
    {
        int y = (int)st[i];
        x = x ^ y;
    }
    printf("%c", x);
    return 0;
}