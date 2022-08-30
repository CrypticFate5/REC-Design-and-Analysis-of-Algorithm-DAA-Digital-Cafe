#include <stdio.h>
#include <string.h>
int main()
{
    char st[50], sub[50];
    scanf("%s", st);
    scanf("%s", sub);
    for (int i = 0; i < strlen(st); i++)
    {
        char s[strlen(sub)];
        memcpy(s, &st[i], strlen(sub));
        s[strlen(sub)] = '\0';
        if (strcmp(s, sub) == 0)
        {
            printf("1");
            return 0;
        }
    }
    printf("0");
    return 0;
}