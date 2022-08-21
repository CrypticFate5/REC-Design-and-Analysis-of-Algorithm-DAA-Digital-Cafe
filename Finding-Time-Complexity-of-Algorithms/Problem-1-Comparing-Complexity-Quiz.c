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
