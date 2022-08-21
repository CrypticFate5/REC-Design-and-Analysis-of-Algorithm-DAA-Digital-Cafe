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
