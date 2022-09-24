# Divide and Conquer based problems
---
## 🌟 Problem 1: Number of zeroes in a given array
### ❓ Question:  
 
Given an array of 1s and 0s this has all 1s first followed by all 0s. Aim is to find the number of 0s. Write a program using Divide and Conquer to Count the number of zeroes in the given array.  
Input Format  
   - First Line Contains Integer m – Size of array
   - Next m lines Contains m numbers – Elements of an array
  
Output Format  
   - First Line Contains Integer – Number of zeroes present in the given array.  
### 💻 Code:

      #include <stdio.h>

      void find(int *arr, int *c, int low, int high, int mid)
      {
         if (arr[mid] == 0 && low <= high)
         {
            (*c)++;
            find(arr, c, low, mid - 1, (low + mid - 1) / 2);
         }
         if (low <= high)
         {
            find(arr, c, mid + 1, high, (mid + 1 + high) / 2);
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
         int c = 0;
         find(arr, &c, 0, n - 1, n / 2);
         printf("%d", c);
         return 0;
      }
   
### 🧐 Explanation:

- 

---
## 🌟 Problem 2: Majority Element
### ❓ Question:  
 
Given an array nums of size n, return the majority element.  
The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array. 

Constraints:
- n == nums.length
- 1 <= n <= 5 * 104
- -2^31 <= nums[i] <= 2^31 - 1

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
         for (int i = 0; i < n - 1; i++)
         {
            int c = 0;
            for (int j = i + 1; j < n; j++)
            {
                  if (arr[i] == arr[j])
                  {
                     c++;
                  }
            }
            if (c >= n / 2)
            {
                  printf("%d", arr[i]);
                  return 0;
            }
         }
      }
### 🧐 Explanation:

- 

---
## 🌟 Problem 3: Finding Floor Value
### ❓ Question:  
 
Given a sorted array and a value x, the floor of x is the largest element in array smaller than or equal to x. Write divide and conquer algorithm to find floor of x.  

Input Format  
   - First Line Contains Integer n – Size of array
   - Next n lines Contains n numbers – Elements of an array
   - Last Line Contains Integer x – Value for x
 
Output Format  
   - First Line Contains Integer – Floor value for x

### 💻 Code:

      #include <stdio.h>

      void help(int *arr, int n, int x, int *max, int low, int high, int mid)
      {
         if (arr[mid] <= x && arr[mid] > (*max))
         {
            *max = arr[mid];
         }
         if (low > high)
            return;
         if (x < arr[mid])
            help(arr, n, x, max, low, mid - 1, (low + mid - 1) / 2);
         if (x > arr[mid])
            help(arr, n, x, max, mid + 1, high, (high + mid + 1) / 2);
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
         int x;
         scanf("%d", &x);
         int max = 0;
         help(arr, n, x, &max, 0, n - 1, n / 2);
         printf("%d", max);
         return 0;
      }

### 🧐 Explanation:

- 

---
## 🌟 Problem 4: Find an element in sorted matrix
### ❓ Question:  
 
Given a sorted matrix mat[m][m] and an element ‘x’. Find whether the element x is present in the matrix. Matrix is sorted in a way such that all elements in a row are sorted in increasing order and for row ‘i’, where 1 <= i <= m-1, the first element of row ‘i’ is greater than or equal to the last element of row ‘i-1’.  

Input Format
   - First Line Contains Integer m – Size of array
   - Next m*m lines Contains m*m numbers – Elements of an array
   - An Integer x – Element to check present in matrix or not  
  
Output Format
   - First Line Contains FOUND or NOT FOUND -  If x is the present print “FOUND” otherwise print “NOT FOUND”

### 💻 Code:

      #include <stdio.h>

      int binary_search(int *arr, int x, int low, int high, int mid)
      {
         if (low > high)
            return -1;
         if (arr[mid] == x)
            return 1;
         else if (arr[mid] > x)
            return binary_search(arr, x, low, mid - 1, (low + mid - 1) / 2);
         else
            return binary_search(arr, x, mid + 1, high, (high + mid + 1) / 2);
      }
      int main()
      {
         int n;
         scanf("%d", &n);
         int arr[n * n];
         for (int i = 0; i < n * n; i++)
         {
            scanf("%d", &arr[i]);
         }
         int x;
         scanf("%d", &x);
         if (binary_search(arr, x, 0, n * n - 1, n * n / 2)==1)
         {
            printf("FOUND");
         }
         else
         {
            printf("NOT FOUND");
         }
         return 0;
      }

### 🧐 Explanation:

- 

---
## 🌟 Problem 5: Two elements sum to x
### ❓ Question:  
 
Given a sorted array of integers say arr[] and a number x. Write a recursive program using divide and conquer strategy to check if there exist two elements in the array whose sum = x. If there exist such two elements then return the numbers, otherwise print as “No”.  
Note: Write a Divide and Conquer Solution  

Input Format
   - First Line Contains Integer n – Size of array
   - Next n lines Contains n numbers – Elements of an array
   - Last Line Contains Integer x – Sum Value
  
Output Format
   - First Line Contains Integer – Element1
   - Second Line Contains Integer – Element2 (Element 1 and Elements 2 together sums to value “x”)

### 💻 Code:

      #include <stdio.h>
      #include <stdlib.h>
      #include <string.h>
      int help(int *arr, int n, int *map, int j, int x)
      {
         if (j == 2)
         {
            if (x == 0)
            {
                  return 1;
            }
            return 0;
         }
         for (int i = 0; i < n; i++)
         {
            if (map[i] == 0)
            {
                  map[i] = 1;
                  x -= arr[i];
                  if (help(arr, n, map, j + 1, x))
                     return 1;
                  ;
                  map[i] = 0;
                  x += arr[i];
            }
         }
         return 0;
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
         int x;
         scanf("%d", &x);
         int map[n];
         memset(map, 0, sizeof(map));
         if (help(arr, n, map, 0, x))
         {
            for (int i = 0; i < n; i++)
            {
                  if (map[i] == 1)
                  {
                     printf("%d\n", arr[i]);
                  }
            }
         }
         else
         {
            printf("No");
         }
         return 0;
      }

### 🧐 Explanation:

- 

---
