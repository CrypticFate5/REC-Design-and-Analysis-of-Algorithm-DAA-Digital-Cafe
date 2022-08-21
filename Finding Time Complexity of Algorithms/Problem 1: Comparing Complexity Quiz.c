// Problem Statement 1:
// Given two positive integers, determine the GCD of the
// numbers.
// Solve the above Problem Statement using two algorithms, hence
// write two functions,
// 1.     Iterative Function 1(Consecutive Integer
// Checking): pass the 2 integers to the function, and print the GCD and return
// the no of times the loop gets executed in the function.
// 2.     Iterative Function 1(Euclid’s Algorithm): pass
// the 2 integers to the function, and print the GCD and return the no of times
// the loop gets executed in the function
// Compare the return values and print which function is best
// for a specific problem instance.
// Input Format
//    First-line
// Contains the Integer 1
//    Second-line Contains
// Integer 2
 
// Output Format
 
//   First-line prints the result in function
// 1
//   Second-line prints the result in
// function 2
//   Third-line prints the return
// value of function 1
//   Fourth-line prints the return
// value of function 2
//   Fifth-line, Print “Function 1” if the return value of function 1 is lesser than return
// value of function 2   else print: "Function 2”, if the return value of
// function 2 is lesser than the return value of function 1 otherwise print “Equal”

// For example:

// Input	Result
// 10
// 6
// 2
// 2
// 5
// 3
// Function 2
    
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
