#include <stdio.h>

int main(){
    int n,prev1=1,prev2=0,curr;
    scanf("%d",&n);
    if(n==0){
        printf("%d",0);
        return 0;
    }
    for(int i=1;i<n;i++){
        curr=prev1+prev2;
        prev2=prev1;
        prev1=curr;
    }
    printf("%d",prev1);
    return 0;
}