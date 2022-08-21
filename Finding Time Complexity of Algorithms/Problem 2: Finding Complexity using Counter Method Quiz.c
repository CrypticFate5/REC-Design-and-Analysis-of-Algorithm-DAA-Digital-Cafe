// Problem Statement 2:
//  Convert the following algorithm into a program and find its time
// complexity using the counter method.
// void function (int n)
// {
//     int i= 1, s =1;
//     while
// (s <= n)
//     {
//                         i++;
//                         s += i;
//      }      
// }     
// Note: No need of counter increment for declarations and scanf() and  count variable printf() statements.
// Manually find the complexity using counter method and write the
// same in observation
// Input:
//  A positive Integer n
// Output:
// Print the value of the counter variable


// For example:

// Input	Result
// 9
// 12

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
