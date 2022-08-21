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
