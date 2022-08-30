#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    char words[n][100];
    int i = 0;
    while (i < n)
    {
        scanf("%s", words[i]);
        i++;
    }
    char chars[100];
    scanf("%s", chars);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int mpp[26] = {0};
        for (int i = 0; i < strlen(chars); i++)
        {
            mpp[chars[i] - 'a'] += 1;
        }
        int c = 0;
        for (int j = 0; j < strlen(words[i]); j++)
        {
            for (int k = 0; k < strlen(chars); k++)
            {
                if (words[i][j] == chars[k] && mpp[chars[k] - 'a'] > 0)
                {
                    c++;
                    mpp[chars[k] - 'a']--;
                    break;
                }
            }
        }
        if (c == strlen(words[i]))
        {
            ans += c;
        }
    }
    printf("%d", ans);
    return 0;
}