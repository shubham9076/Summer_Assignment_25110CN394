#include<stdio.h>
int main(){
    int n,sum=0;
    printf("enter a number to check perfect number ");\
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum = sum +i;
        }
    }
    if(sum==n){
        printf("the enter number is perfect number ");
    }
    else{
        printf("the enter number is NOT perfect number ");
    }
    return 0;
}