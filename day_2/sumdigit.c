#include<stdio.h>
int main (){
    int n,sum=0;
    printf("enter a number to find the sum ");
    scanf("%d",&n);
    while(n>0){
        int digit=n%10;
        sum=sum+digit;
        n=n/10;
    }
    printf("sum of digit =%d",sum);
    return 0;
}