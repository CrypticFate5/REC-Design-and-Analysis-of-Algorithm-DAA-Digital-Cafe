#include <stdio.h>
int main()
{
    char c;
    scanf("%c", &c);
    if (c == 'w' || c == 'W')
    {
        printf("whatsapp");
    }
    else if (c == 't' || c == 'T')
    {
        printf("twitter");
    }
    else if (c == 'f' || c == 'F')
    {
        printf("facebook");
    }
    else
    {
        printf("undefined");
    }
    return 0;
}