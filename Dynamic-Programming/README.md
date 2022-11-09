# Dynamic Programming
---
## 🌟 Problem 1: 
### ❓ Question:

Ram and Sita are playing with numbers by giving puzzles to each other. Now it was Ram term, so he gave Sita a positive integer ‘n’ and two numbers 1 and 3. He asked her to find the possible ways by which the number n can be represented using 1 and 3.Write any efficient algorithm to find the possible ways.

Example 1:

Input: 6  
Output:6  
Explanation: There are 6 ways to 6 represent number with 1 and 3  
         1+1+1+1+1+1  
         3+3  
         1+1+1+3  
         1+1+3+1  
         1+3+1+1  
         3+1+1+1  
         
Input Format  
First Line contains the number n.
 
Output Format  
Print: The number of possible ways ‘n’ can be represented using 1 and 3.


### 💻 Code:
    
    #include <stdio.h>

    int main()
    {
        int n;
        scanf("%d", &n);
        long long int prev1 = 1, prev2 = 1, prev3 = 1, curr;
        for (int i = 3; i <= n; i++)
        {
            curr = prev1 + prev3;
            prev3 = prev2;
            prev2 = prev1;
            prev1 = curr;
        }
        printf("%lld", prev1);
        return 0;
    }

### ⌚🚀 Complexity:

- Time Complexity: O(n)
- Space Complexity: O(1)

### 🧐 Explanation:

-

---
## 🌟 Problem 2: Longest Common Subsequence
### ❓ Question:

Given two strings find the length of the common longest subsequence(need not be contiguous) between the two.

Example:

s1: ggtabe  
s2: tgatasb


The length is 4


### 💻 Code:
    
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

### ⌚🚀 Complexity:

- Time Complexity: O(2<sup>n+m</sup>)
- Space Complexity: O(n)+O(m)
### 🧐 Explanation:

-

---
## 🌟 Problem 3: Longest non-decreasing Subsequence
### ❓ Question:


Find the length of the Longest Non-decreasing Subsequence in a given Sequence.

Eg:  

Input:9  

Sequence:[-1,3,4,5,2,2,2,2,3]  
The subsequence is: [-1,2,2,2,2,3]

Output:6


### 💻 Code:
    
    #include <stdio.h>
    #include <limits.h>
    
    void help(int *arr, int n, int j, int l, int prev, int *ans)
    {
        if (j == n)
        {
            if (l > *ans)
                *ans = l;
            return;
        }
        if (arr[j] >= prev)
            help(arr, n, j + 1, l + 1, arr[j], ans);
        help(arr, n, j + 1, l, prev, ans);
    }
    int main()
    {
        int n, ans = 0;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        help(arr, n, 0, 0, INT_MIN, &ans);
        printf("%d", ans);
        return 0;
    }

### ⌚🚀 Complexity:

- Time Complexity: O(2<sup>n</sup>)
- Space Complexity: O(n)+O(n)

### 🧐 Explanation:

-

---
## 🌟 Problem 4: Playing With Chessboard
### ❓ Question:

Ram is given with an n*n chessboard with each cell with a monetary value. Ram stands at the (0,0), that the position of the top left white rook. He is been given a task to reach the bottom right black rook position (n-1, n-1) constrained that he needs to reach the position by traveling the maximum monetary path under the condition that he can only travel one step right or one step down the board. Help ram to achieve it by providing an efficient DP algorithm.


Example:
Input
3
1 2 4
2 3 4
8 7 1  
Output:
19

Explanation:
Totally there will be 6 paths among that the optimal is:  
Optimal path value- 1+2+8+7+1=19


### 💻 Code:
    
    #include <stdio.h>
    #include <string.h>

    int max(int a, int b)
    {
        if (a > b)
            return a;
        return b;
    }

    int help(int n, int chess[][n], int i, int j)
    {
        if (i == n - 1 && j == n - 1)
            return chess[n - 1][n - 1];
        int l = 0, r = 0;
        if (i < n - 1)
            l = chess[i][j] + help(n, chess, i + 1, j);
        if (j < n - 1)
            r = chess[i][j] + help(n, chess, i, j + 1);
        return max(l, r);
    }

    int main()
    {
        int n;
        scanf("%d", &n);
        int chess[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                scanf("%d", &chess[i][j]);
        }
        printf("%d", help(n, chess, 0, 0));
        return 0;
    }

### ⌚🚀 Complexity:

- Time Complexity: O(2<sup>n*n</sup>)
- Space Complexity: O(n<sup>2</sup>)

### 🧐 Explanation:

-

---


