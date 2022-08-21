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
    void gcdIter(int a,int b,int*gcd,int*c){
        for(int i=b;i>1;i--){
            if(a%i==0&&b%i==0){
                (*gcd)=i;
                break;
            }
            (*c)++;
        }
    }
    int gcdEucl(int a,int b,int *c){
        if(b==0){
            return a;
        }
        (*c)++;
        return gcdEucl(b,a%b,c);
    }
    int main(){
        int a,b;
        scanf("%d %d",&a,&b);
        int gcd=0,c=1;
        gcdIter(a,b,&gcd,&c);
        printf("%d\n",gcd);
        int c1=0;
        printf("%d\n",gcdEucl(a,b,&c1));
        printf("%d\n",c);
        printf("%d\n",c1);
        if(c1<c)
            printf("Function 2\n");
        else{
            printf("Function 1\n");
        }
        return 0;
    }
  
### 🧐 Explanation:

- Here we write a simple for loop(iterative based) and recursive(Euclid's Algorithm) solutions for finding GCD of given two numbers as given in the question. 
- Find the GCD of two numbers concept: [Click here!](https://www.geeksforgeeks.org/c-program-find-gcd-hcf-two-numbers/)
- In these funtions we pass a integer pointer 'c' (c1 and c2 here) such that it keeps a track of the count of iterations done by the respective functions.  
- We have passed a pointer variable (a prime example for call by reference too!) so as to save the value of count in every iteration/recursion.  
- The value of c1 and c2 is incremented in each iteration/recursion call, which is denoted as (*c)++.
- We used a * while incrementing because pointer is being passed to the funtion, and to convert the address(pointer basically) we have used * to revert back to the value of c1 or c2 at their respective address.  
- And finally in the main funtion, we print the c1 and c2 as shown in the code.
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
    void function(int n,int*c){
        int i=1,s=1;
        (*c)+=2;
        while(s<=n){
            (*c)++;
            i++;
            (*c)++;
            s+=i;
            (*c)++;

        }
        (*c)++;
    }
    int main(){
        int n;
        scanf("%d",&n);
        int c=0;
        function(n,&c);
        printf("%d",c);
    }
### 🧐 Explanation:


---
## 🌟 Problem 3: Finding Complexity using Counter Method
### ❓ Question:
Convert the following algorithm into a program and find its time complexity using the counter method.

    void func(int n)
    { 
          if(n==1)
                {
                    printf("");
                }
        else
                {
                            for
    (int i=1; i<=n; i++)
                            {
                                        for
    (int j=1; j<=n; j++)
                                        {
                                                    printf
    ("");
                                                    printf("");
                                                    break;
                                        }
                            }
                }                      
      }
Note: No need of counter increment for declarations and scanf() and  count variable printf() statements.
### 💻 Code:

    #include <stdio.h>
    void func(int n,int*c){
        if(n==1){
            (*c)++;
            // printf(" ");
            (*c)++;
        }
        else{
            (*c)++;
            for(int i=1;i<=n;i++){
                (*c)++;
                for(int j=1;j<=n;j++){
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
    int main(){
        int n;
        scanf("%d",&n);
        int c=0;
        func(n,&c);
        printf("%d",c);
    }
  
### 🧐 Explanation:
---
## 🌟 Problem 4: Finding Complexity using Counter Method
### ❓ Question:
Convert the following algorithm into a program and find its time complexity using counter method.

    Factor(n) {
        {
        for (i = 1; i <= num;++i)
        {
                    if (num % i== 0)
            {
                    printf("%d ", i);
            }

        }
            return 0;
    }
 
Note: No need of counter increment for declarations and scanf() and  printf() statements.  
### 💻 Code:

    #include <stdio.h>
    void factor(int n,int *c) {
        (*c)++;
        for (int i = 1; i <=n;i++){
            (*c)++;
            (*c)++;
            if (n % i== 0){
                // printf("%d ", i);
            }
        }
        (*c)++;
        // return 0;
    }
    int main(){
        int n,c=0;
        scanf("%d",&n);
        factor(n,&c);
        printf("%d",c);
    }
  
### 🧐 Explanation:
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
  
### 🧐 Explanation:
---
