#include<stdio.h>
int main (){
    int n, a=0, b=1,c;
    printf("enter a number ");
    scanf("%d",&n);
    if (n==1){
        printf("%d",a);
    }
    else if(n==2){
        printf("%d",b);
    }
    for(int i=3;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    printf("%d",b);
    return 0;
}