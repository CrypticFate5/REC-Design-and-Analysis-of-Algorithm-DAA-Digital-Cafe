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
