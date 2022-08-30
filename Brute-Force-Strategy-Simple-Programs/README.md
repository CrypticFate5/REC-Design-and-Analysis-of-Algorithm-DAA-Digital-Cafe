# Brute Force Strategy- Simple Programs
---
## 🌟 Problem 1: Finding Duplicates
### ❓ Question:  
 
Given a read only array of n + 1 integers between 1 and n, find one number that repeats.  
### 💻 Code:
    include <stdio.h>
    int main()
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    printf("%d", arr[i]);
                    return 0;
                }
            }
        }
        return 0;
    }

### 🧐 Explanation:

- First we take the size of array and declare the array.
- Then we iterate over the array by taking each element(index i) and by comparing it throughout the array(index j).
- If the choosen element is equal to the iterating element, then we print that element and terminate the program.

---
## 🌟 Problem 2: Bubble Sort
### ❓ Question:  
 
Bubble sort is one of the easiest and brute force sorting algorithms. It is used to sort elements in either ascending or descending order.

Write a program to implement the bubble sort Algorithm. Get the number of elements as in input in the first line and then get the numbers as input. Display the numbers in ascending order as output.

### 💻 Code:

    #include <stdio.h>
    void bubbleSort(int *arr, int n)
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
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        bubbleSort(arr, n);
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        return 0;
    }
### 🧐 Explanation:

- The function bubbleSort, takes an array and an integer which is the size of the array.
- We iterate from 0 to n-1 in the first for loop. The reason to choose to go upto n-1 is because when n-1 passes are done, the array would be sorted and there is no need of sorting the array again to set the last element in last position of array.
- Then we iterate from 0 to n-i-1 in the second for loop. The reason here to choose n-i-1 is after every i'th pass, the greatest element would be set at n-i th position, so we go from 0 to n-i-1 th position.
- Then we check the corresponding elements (arr[j] and arr[j+1]) and if the next element is smaller than it's previous one, we swap it.
- And finally we call the funtion in main by taking appropriate inputs from the user.

---
## 🌟 Problem 3: Pair with Difference
### ❓ Question:  

Given an array A of sorted integers and another non negative integer k, find if there exists 2 indices i and j such that A[j] - A[i] = k, i != j.

### 💻 Code:
    #include <stdio.h>
    int main()
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        int k;
        scanf("%d", &k);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i != j && (arr[i] - arr[j] == k))
                {
                    printf("1");
                    return 0;
                }
            }
        }
        printf("0");
        return 0;
    }
### 🧐 Explanation:

- First we take the size of array and then declare the array and fill the array with elements and then take the the input integer k.
- Then by exactly implementing the condtion given in the question, that is , we iterate over the array to key a value and then again iterate(the nested for loop) over it to find a pair of value such that the difference of the elements is k.
- The nested for loops are made and the condition i!=j is given to ensure that the same elements are not forming a pair and the other condition is same as the question.
- If the condition satisfies, we print 1 and terminate the program by return 0.
- Else if no pairs are found, the program will print 0 and terminate.

---
## 🌟 Problem 4: String Matching
### ❓ Question:  
Given a string and a pattern identify whether the pattern occurs in the given string or not. If the pattern occurs in the given string then print 1 otherwise print 0.


### 💻 Code:

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

### 🧐 Explanation:

-
-
---
## 🌟 Problem 5: Print intersection of 2 sorted arrays
### ❓ Question:  

Find the intersection of two sorted arrays.

OR in other words,

Given 2 sorted arrays, find all the elements which occur in both the arrays. 

Input Format  
The first line contains T, the number of test cases. Following T lines contain:  
1. Line 1 contains N1, followed by N1 integers of the first array
2. Line 2 contains N2, followed by N2 integers of the second array

Output Format  
The intersection of the arrays in a single line

### 💻 Code:

    #include <stdio.h>
    int main()
    {
        int t;
        scanf("%d", &t);
        while (t--)
        {
            int x, y;
            scanf("%d", &x);
            int arr1[x];
            for (int i = 0; i < x; i++)
            {
                scanf("%d", &arr1[i]);
            }
            scanf("%d", &y);
            int arr2[y];
            for (int i = 0; i < y; i++)
            {
                scanf("%d", &arr2[i]);
            }
            for (int i = 0; i < x; i++)
            {
                for (int j = 0; j < y; j++)
                {
                    if (arr1[i] == arr2[j])
                    {
                        printf("%d ", arr1[i]);
                        break;
                    }
                }
            }
        }
        return 0;
    }
### 🧐 Explanation:

-

---
## 🌟 Problem 6: Add Array
### ❓ Question:  

The array-form of an integer num is an array representing its digits in left to right order.  
For example, for num = 1321, the array form is [1,3,2,1].  
Given num, the array-form of an integer, and an integer k, return the array-form of the integer num + k.  

Constraints:

- 1 <= num.length <= 104  
- 0 <= num[i] <= 9  
- num does not contain any leading zeros except for the zero itself.  
- 1 <= k <= 104
### 💻 Code:

    #include <stdio.h>
    int main()
    {
        long int sub = 0, n, k, ans;
        scanf("%ld", &n);
        long int y = n;
        while (n--)
        {
            long int x, pos = 1;
            scanf("%ld", &x);
            for (int i = 0; i < n; i++)
            {
                pos *= 10;
            }
            sub += (pos * x);
        }
        scanf("%ld", &k);
        ans = k + sub;
        long int arrans[y + 10];
        long q = 0;
        while (ans > 0)
        {
            arrans[q] = ans % 10;
            ans /= 10;
            q++;
        }
        for (long int i = q - 1; i >= 0; i--)
        {
            printf("%ld ", arrans[i]);
        }
        return 0;
    }

### 🧐 Explanation:

-

---
## 🌟 Problem 7: Find Words 
### ❓ Question:  

You are given an array of strings words and a string chars.

A string is good if it can be formed by characters from chars (each character can only be used once).

Return the sum of lengths of all good strings in words.

Example 1:

Input: words = ["cat","bt","hat","tree"], chars = "atach"  
Output: 6  
Explanation: The strings that can be formed are "cat" and "hat" so the answer is 3 + 3 = 6.
Example 2:

Input: words = ["hello","world","leetcode"], chars = "welldonehoneyr"  
Output: 10  
Explanation: The strings that can be formed are "hello" and "world" so the answer is 5 + 5 = 10.
 

Constraints:

1 <= words.length <= 1000  
1 <= words[i].length, chars.length <= 100  
words[i] and chars consist of lowercase English letters.


### 💻 Code:

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

### 🧐 Explanation:

-

---