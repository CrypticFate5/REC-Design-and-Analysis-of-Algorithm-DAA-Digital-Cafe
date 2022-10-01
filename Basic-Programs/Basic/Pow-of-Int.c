#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d",&a,&b);
    b--;
    c=a;
    while(b--){
        a*=c;
    }
    printf("%d",a);
    return 0;
}