#include<stdio.h>
int main(){
    int n ,sum=0,fact,digit,temp;
    printf("enter a number to check a strong number ");
    scanf("%d",&n);
    temp=n;
    while(temp>0){
        digit=temp%10;
        fact=1;
        for(int i=1;i<=digit;i++){
            fact=fact*i;
        }
        sum=sum +fact;
        temp=temp/10;
    }
    if(sum==n){
        printf("the number is strong number ");

    }
    else{
        printf("enter number is NOT strong number ");
    }
    return 0;

    
}