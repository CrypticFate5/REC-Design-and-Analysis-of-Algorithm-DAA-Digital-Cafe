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
