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
First Line contains the number n
 
Output Format  
Print: The number of possible ways ‘n’ can be represented using 1 and 3


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

### 🧐 Complexity:

- Time Complexity: O(n)
- Space Complexity: O(1)

### 🧐 Explanation:

-

---
## 🌟 Problem 2: 
### ❓ Question:




### 💻 Code:
    

  
### 🧐 Explanation:

-

---
## 🌟 Problem 3: 
### ❓ Question:




### 💻 Code:
    

  
### 🧐 Explanation:

-

---
## 🌟 Problem 4: 
### ❓ Question:




### 💻 Code:
    

  
### 🧐 Explanation:

-

---


