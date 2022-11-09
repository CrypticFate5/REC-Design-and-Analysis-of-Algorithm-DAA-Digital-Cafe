# Greedy Algorithms
---
## 🌟 Problem 1: 
### ❓ Question:

Write a program to take value V and  we want to make change for V Rs, and we have infinite supply of each of the denominations in Indian currency, i.e., we have infinite supply of { 1, 2, 5, 10, 20, 50, 100, 500, 1000} valued coins/notes, what is the minimum number of coins and/or notes needed to make the change.

Input Format:
- Take an integer from stdin.

Output Format:
- Print the integer which is change of the  number.


### 💻 Code:
    
    #include <stdio.h>

    int main()
    {
        int n, ans = 0;
        scanf("%d", &n);
        int arr[] = {1000, 500, 100, 50, 20, 10, 5, 2, 1};
        for (int i = 0; i < 9; i++)
        {
            if ((arr[i] % n) == arr[i])
            {
                n -= arr[i];
                i = 0;
                ans++;
            }
            if (n == 0)
            {
                break;
            }
        }
        printf("%d", ans);
        return 0;
    }
  
### 🧐 Explanation:

-

---
## 🌟 Problem 2: 
### ❓ Question:

Assume you are an awesome parent and want to give your children some cookies. But, you should give each child at most one cookie.

Each child i has a greed factor g[i], which is the minimum size of a cookie that the child will be content with; and each cookie j has a size s[j]. If s[j] >= g[i], we can assign the cookie j to the child i, and the child i will be content. Your goal is to maximize the number of your content children and output the maximum number.

### 💻 Code:
    
    #include <stdio.h>

    void sort(int *arr, int n)
    {
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
    int main()
    {
        int x, y, ans = 0, k = 0;
        scanf("%d", &x);
        int child[x];
        for (int i = 0; i < x; i++)
        {
            scanf("%d", &child[i]);
        }
        scanf("%d", &y);
        int cookies[y];
        for (int i = 0; i < y; i++)
        {
            scanf("%d", &cookies[i]);
        }
        sort(child, x);
        sort(cookies, y);
        for (int i = 0; i < x; i++)
        {
            for (int j = k; j < y; j++)
            {
                if (child[i] <= cookies[j])
                {
                    ans++;
                    k = j + 1;
                    break;
                }
            }
        }
        printf("%d", ans);
        return 0;
    }
  
### 🧐 Explanation:

-

---
## 🌟 Problem 3: 
### ❓ Question:

At a lemonade stand, each lemonade costs $5. Customers are standing in a queue to buy from you, and order one at a time (in the order specified by bills). Each customer will only buy one lemonade and pay with either a $5, $10, or $20 bill. You must provide the correct change to each customer so that the net transaction is that the customer pays $5.

Note that you don't have any change in hand at first.

Given an integer array bills where bills[i] is the bill the ith customer pays, return true if you can provide every customer with correct change, or false otherwise.

### 💻 Code:
    
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
  
### 🧐 Explanation:

-

---
## 🌟 Problem 4: 
### ❓ Question:

A person needs to eat burgers. Each burger contains a count of calorie. After eating the burger, the person needs to run a distance to burn out his calories.   
If he has eaten i burgers with c calories each, then he has to run at least 3i * c  kilometers to burn out the calories. For  example, if he ate 3
burgers with the count of calorie in the order: [1, 3, 2], the kilometers he needs to run are (30 * 1) + (31 * 3) + (32 * 2) = 1 + 9 + 18 = 28.  
But this is not the minimum, so need to try out other orders of consumption and choose the minimum value. Determine the minimum distance he needs to run. Note: He can eat burger in any order and use an efficient sorting algorithm.

### 💻 Code:
    
    #include <stdio.h>

    void sort(int *arr, int n)
    {
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (arr[j] < arr[j + 1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
    int power(int a)
    {
        if (a == 0)
            return 1;
        return 3 * power(a - 1);
    }
    int main()
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        sort(arr, n);
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans += power(i) * arr[i];
        }
        printf("%d", ans);
    }
  
### 🧐 Explanation:

-

---
## 🌟 Problem 5: 
### ❓ Question:

In a gift shop there are N different types of gifts available and the prices for all N different types of gifts are given. It is a discount sale where you can buy a single gift and get at-most M other gifts for free.
- Find the minimum amount of money that is needed to buy all the N different gifts.
- Find the maximum amount of money that is needed to buy all the N different gifts.  

In both these cases utilize the discount and get maximum possible gifts back. If M or more gifts are available, for every purchase take M gifts. In case less than M gifts are in stock, then take all gifts for purchasing a gift.  
For example, if there are four gifts in shop with prices 3,2,1,4 respectively and M=2. Since M=2, if we purchase one gift we can take at most two more for free. So in the first case we purchase the gift whose price is 1 and take gifts worth 3 and 4 for free, also you can purchase gift worth 2 as well. Therefore, minimum cost = 1+2 = 3. In the second case we purchase the gift whose price is 4 and take gifts worth 1 and 2 for free, also you can buy gift worth 3 as well. Therefore, maximum cost = 3+4 = 7.

### 💻 Code:
    
    #include <stdio.h>
    #include <stdlib.h>
    void sort(int *arr, int n)
    {
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
    int main()
    {
        int n, m, min = 0, max = 0;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        scanf("%d", &m);
        sort(arr, n);
        int k = n;
        for (int i = 0; i < k; i++)
        {
            k -= m;
            min += arr[i];
        }
        k = 0;
        for (int i = n - 1; i >= k; i--)
        {
            k += m;
            max += arr[i];
        }
        printf("%d\n%d", min, max);
        return 0;
    }
  
### 🧐 Explanation:

-

---
## 🌟 Problem 6: 
### ❓ Question:

Given lengths of n pipes and a value m. You can either increase or decrease the length of every pipe by m (only once) where m > 0. The task is to minimize the difference between the lengths of the longest and the shortest pipe after modifications, and output this difference.

### 💻 Code:
    
    #include <stdio.h>

    void sort(int n, int *arr)
    {
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
    int min(int a, int b)
    {
        if (a < b)
            return a;
        return b;
    }
    int max(int a, int b)
    {
        if (a > b)
            return a;
        return b;
    }
    int main()
    {
        int n, m;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        scanf("%d", &m);
        sort(n, arr);
        int ans = arr[n - 1] - arr[0];
        for (int i = 1; i < n; i++)
        {
            int x = max(arr[n - 1] - m, arr[i - 1] + m);
            int y = min(arr[0] + m, arr[i] - m);
            int d = x - y;
            if (d < 0)
                continue;
            ans = min(ans, d);
        }
        printf("%d", ans);
        return 0;
    }
  
### 🧐 Explanation:

-

---
