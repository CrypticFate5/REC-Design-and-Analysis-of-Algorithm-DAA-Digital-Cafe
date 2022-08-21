# Finding Time Complexity of Algorithms
---
## 🌟 Problem 1: Comparing Complexity
### ❓ Question:
Given two positive integers, determine the GCD of the numbers.  
Solve the above Problem Statement using two algorithms, hence write two functions,  
  
1.Iterative Function 1 (Consecutive Integer Checking): pass the 2 integers to the function, and print the GCD and return the no of times the loop gets executed in the function.  
2.Iterative Function 2 (Euclid’s Algorithm): pass the 2 integers to the function, and print the GCD and return the no of times the loop gets executed in the function.   
  
Compare the return values and print which function is best for a specific problem instance.  
### 💻 Code:
    
    #include <stdio.h>
    void gcdIter(int a, int b, int *gcd, int *c)
    {
        for (int i = b; i > 1; i--)
        {
            if (a % i == 0 && b % i == 0)
            {
                (*gcd) = i;
                break;
            }
            (*c)++;
        }
    }
    int gcdEucl(int a, int b, int *c)
    {
        if (b == 0)
        {
            return a;
        }
        (*c)++;
        return gcdEucl(b, a % b, c);
    }
    int main()
    {
        int a, b;
        scanf("%d %d", &a, &b);
        int gcd = 0, c = 1;
        gcdIter(a, b, &gcd, &c);
        printf("%d\n", gcd);
        int c1 = 0;
        printf("%d\n", gcdEucl(a, b, &c1));
        printf("%d\n", c);
        printf("%d\n", c1);
        if (c1 < c)
            printf("Function 2\n");
        else
        {
            printf("Function 1\n");
        }
        return 0;
    }
  
### 🧐 Explanation:

- Here we write a simple for loop(iterative based) and recursive(Euclid's Algorithm) solutions for finding GCD of given two numbers as given in the question. 
- Find the GCD of two numbers concept: [Click here!](https://www.geeksforgeeks.org/c-program-find-gcd-hcf-two-numbers/)
- In these functions we pass a integer pointer 'c' (c1 and c2 here) such that it keeps a track of the count of iterations done by the respective functions.  
- We have passed a pointer variable (a prime example for call by reference too!) so as to save the value of count in every iteration/recursion.  
- The value of c1 and c2 is incremented in each iteration/recursion call, which is denoted as (*c)++.
- We used a * while incrementing because pointer is being passed to the funtion, and to convert the address(pointer basically) we have used * to revert back to the value of c1 or c2 at their respective address.  
- And finally in the main function, we print the c1 and c2 as shown in the code.
---
## 🌟 Problem 2: Finding Complexity using Counter Method
### ❓ Question:
Convert the following algorithm into a program and find its time complexity using the counter method.  

    void function (int n)  
    {  
      int i= 1, s =1;  
        while(s <= n)  
        {  
          i++;  
          s += i;  
        }          
    }     
Note: No need of counter increment for declarations and scanf() and  count variable printf() statements.  
Manually find the complexity using counter method and write the same in observation  
### 💻 Code:
    #include <stdio.h>
    void function(int n, int *c)
    {
        int i = 1, s = 1;
        (*c) += 2;
        while (s <= n)
        {
            (*c)++;
            i++;
            (*c)++;
            s += i;
            (*c)++;
        }
        (*c)++;
    }
    int main()
    {
        int n;
        scanf("%d", &n);
        int c = 0;
        function(n, &c);
        printf("%d", c);
    }
### 🧐 Explanation:
- First we increment the count by 2 as we have declared i and s as 1.
- Then inside the while loop, for condition checking(s<=n), we increment the counter by 1.
- Then again incrementing c by 1 for i++ statement.
- And inside while loop, finally incrementing the counter by one for s+=i condition.
- Now the termination condition is checked for the while loop, and we increment the counter by 1 for the while loop termination check.
- And finally print the count in the main function.

---
## 🌟 Problem 3: Finding Complexity using Counter Method
### ❓ Question:
Convert the following algorithm into a program and find its time complexity using the counter method.

    void func(int n)
    {
        if (n == 1)
        {
            printf("");
        }
        else
        {
            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= n; j++)
                {
                    printf("");
                    printf("");
                    break;
                }
            }
        }
    }

Note: No need of counter increment for declarations and scanf() and  count variable printf() statements.
### 💻 Code:

    #include <stdio.h>
    void func(int n, int *c)
    {
        if (n == 1)
        {
            (*c)++;
            // printf(" ");
            (*c)++;
        }
        else
        {
            (*c)++;
            for (int i = 1; i <= n; i++)
            {
                (*c)++;
                for (int j = 1; j <= n; j++)
                {
                    (*c)++;
                    // printf(" ");
                    (*c)++;
                    // printf(" ");
                    (*c)++;
                    break;
                }
                (*c)++;
            }
            (*c)++;
        }
    }
    int main()
    {
        int n;
        scanf("%d", &n);
        int c = 0;
        func(n, &c);
        printf("%d", c);
    }
  
### 🧐 Explanation:

- Here, the question clearly states that count the printf() statement also.
- In the function, first it checks for n==1, so c incremented by 1 and for printf, again incremented by 1.
- For the else part execution, it's incremented by 1.\
- Inside the else part, the first for loop,for condtion checking, it's incremented by 1 (every check till before the termination).
- Inside the first for loop, we increment the counter again for the nested for loop and then for the two print statements respectively. Note that break statement here has no significance as statements such as break, continue are used only inside if-else statements for their correct execution.
- And then for each for loop, the termination is done and counter is incremented by 1 for both the loops.
- Finally the count is printed inside the main function.
  
---
## 🌟 Problem 4: Finding Complexity using Counter Method
### ❓ Question:
Convert the following algorithm into a program and find its time complexity using counter method.

    Factor(n)
    {
        {
            for (i = 1; i <= num; ++i)
            {
                if (num % i == 0)
                {
                    printf("%d ", i);
                }
            }
            return 0;
        }
 
Note: No need of counter increment for declarations and scanf() and  printf() statements.  
### 💻 Code:

    #include <stdio.h>
    void factor(int n, int *c)
    {
        for (int i = 1; i <= n; i++)
        {
            (*c)++;
            (*c)++;
            if (n % i == 0)
            {
                // printf("%d ", i);
            }
        }
        (*c)++;
        (*c)++;
        // return ;
    }
    int main()
    {
        int n, c = 0;
        scanf("%d", &n);
        factor(n, &c);
        printf("%d", c);
    }
  
### 🧐 Explanation:

- In the factor function, the counter is incremented inside the for loop for condition checking.
- Again the counter is incremented for the if statement and also no increment inside the if statement as the given question has stated that no need for incrementing the counter for printf() statements.
- Again outside the for loop, counter is incremented for the termination process.
- And then incremented again for the return statement.
- Finally inside the main function, the counter is printed.

---
## 🌟 Problem 5: Finding Complexity using Counter Method
### ❓ Question:
Convert the following algorithm into a program and find its time complexity using counter method.

    void function(int n)
    {
        int c= 0;
        for(int i=n/2; i<n; i++)
            for(int j=1; j<n; j = 2 * j)
                for(int k=1; k<n; k = k * 2)
                    c++;
    }
    
Note: No need of counter increment for declarations and scanf() and  count variable printf() statements.  
### 💻 Code:

    #include <stdio.h>
    void function(int n,int *c1){
        int c= 0;
        (*c1)++;
        for(int i=n/2; i<n; i++){
            (*c1)++;
            for(int j=1; j<n; j = 2 * j){
                (*c1)++;
                for(int k=1; k<n; k = k * 2){
                    (*c1)++;
                    c++;
                    (*c1)++;
                }
                (*c1)++;
            }
            (*c1)++;
        }
        (*c1)++;
    }
    int main(){
        int n,c1=0;
        scanf("%d",&n);
        function(n,&c1);
        printf("%d",c1);
    }
  
### 🧐 Explanation:

- Increment the counter by 1 for the assignment of c=0.
- Then for each for loop increment the counter and also add the termination increment count.
- Inside the deepest for loop, increment tthe counter again for the c++ statement.
- Finally in the main function, print the counter.

---
## 🌟 Problem-6: Finding Complexity using counter method
### ❓ Question:
Convert the following algorithm into a program and find its time complexity using counter method.

    void reverse(int n)
    {
       int rev = 0, remainder;
       while (n != 0) 
        {
            remainder = n % 10;
            rev = rev * 10 + remainder;
            n/= 10;

        }
    print(rev);
    }
 
Note: No need of counter increment for declarations and scanf() and  count variable printf() statements.  
### 💻 Code:

    #include <stdio.h>
    void reverse(int n,int*c){
       int rev = 0, remainder;
       (*c)++;
       while (n != 0) {
           (*c)++;
           remainder = n % 10;
           (*c)++;
           rev = rev * 10 + remainder;
           (*c)++;
           n/= 10;
           (*c)++;
        }
        (*c)++;
        // printf("%d",rev);
        (*c)++;
    }
    int main(){
        int n,c=0;
        scanf("%d",&n);
        reverse(n,&c);
        printf("%d",c);
    }
  
### 🧐 Explanation

- Increment the counter by 1 for the initialization of rev=0.
- In the while loop, increment the counter for condtion check.
- Then for each statements inside the while loop, we have incremented the counter by 1.
- And outside the while loop, increment counter for the termination check and also the printf() as the question clearly states that count the printf() statements.
- Finally in the main function, print the counter.
---
