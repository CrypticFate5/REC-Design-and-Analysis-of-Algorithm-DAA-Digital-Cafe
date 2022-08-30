#include <stdio.h>
int main()
{
    char c;
    scanf("%c", &c);
    if (c == 'r' || c == 'R')
    {
        printf("RED");
    }
    else if (c == 'g' || c == 'G')
    {
        printf("GREEN");
    }
    else if (c == 'b' || c == 'B')
    {
        printf("BLUE");
    }
    else
    {
        printf("UNDEFINED");
    }
    return 0;
}