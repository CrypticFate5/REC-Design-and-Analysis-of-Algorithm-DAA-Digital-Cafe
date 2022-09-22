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
