# String Matching 
---
## 🌟 Problem 1: Rabin Karp Algorithm Implementation
### ❓ Question:

Given two strings text and pattern, return the index of the first occurrence of pattern in text, or -1 if pattern is not part of text.

Use Rabin Karp algorithm to solve the problem.


### 💻 Code:
    
    #include <stdio.h>
    #include <string.h>
    #define d 256
    int search(char pat[], char txt[], int q)
    {
        int M = strlen(pat);
        int N = strlen(txt);
        int i, j;
        int p = 0;
        int t = 0;
        int h = 1;
        for (i = 0; i < M - 1; i++)
            h = (h * d) % q;
        for (i = 0; i < M; i++)
        {
            p = (d * p + pat[i]) % q;
            t = (d * t + txt[i]) % q;
        }
        for (i = 0; i <= N - M; i++)
        {
            if (p == t)
            {
                for (j = 0; j < M; j++)
                {
                    if (txt[i + j] != pat[j])
                        break;
                }
                if (j == M)
                {
                    printf("%d", i);
                    return 1;
                }
            }
            if (i < N - M)
            {
                t = (d * (t - txt[i] * h) + txt[i + M]) % q;
                if (t < 0)
                    t = (t + q);
            }
        }
        printf("-1");
        return 0;
    }
    int main()
    {
        char txt[50];
        char pat[50];
        scanf("%s", txt);
        scanf("%s", pat);
        int q = 101;
        search(pat, txt, q);
        return 0;
    }
  
### 🧐 Explanation:

-

---
## 🌟 Problem 2: KMP Algorithm Implementation
### ❓ Question:


Given two strings text and pattern, return the index of the all occurrence of pattern in text, or -1 if pattern is not part of text.

Also Print the LPS array. 

Use KMP algorithm to solve the problem.

### 💻 Code:
    
    #include <stdio.h>
    #include <string.h>
    void computeLPSArray(char *pat, int M, int *lps);
    void KMPSearch(char *pat, char *txt)
    {
        int M = strlen(pat);
        int N = strlen(txt);
        int lps[M];
        computeLPSArray(pat, M, lps);
        int i = 0;
        int j = 0;
        while ((N - i) >= (M - j))
        {
            if (pat[j] == txt[i])
            {
                j++;
                i++;
            }
            if (j == M)
            {
                printf("%d ", i - j);
                j = lps[j - 1];
            }
            else if (i < N && pat[j] != txt[i])
            {
                if (j != 0)
                    j = lps[j - 1];
                else
                    i = i + 1;
            }
        }
        printf("\n");
        for (int i = 0; i < M; i++)
            printf("%d ", lps[i]);
    }
    void computeLPSArray(char *pat, int M, int *lps)
    {
        int len = 0;
        lps[0] = 0;
        int i = 1;
        while (i < M)
        {
            if (pat[i] == pat[len])
            {
                len++;
                lps[i] = len;
                i++;
            }
            else
            {
                if (len != 0)
                    len = lps[len - 1];
                else
                {
                    lps[i] = 0;
                    i++;
                }
            }
        }
    }
    int main()
    {
        char txt[50];
        char pat[50];
        scanf("%[^\n]s", txt);
        scanf("%s", pat);
        KMPSearch(pat, txt);
        return 0;
    }
  
### 🧐 Explanation:

-

---