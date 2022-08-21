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
