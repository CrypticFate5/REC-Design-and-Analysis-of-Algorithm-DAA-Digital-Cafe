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
