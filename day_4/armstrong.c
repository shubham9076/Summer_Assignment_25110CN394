#include<stdio.h>
int main (){
    int n,temp,rem,sum=0;
    printf("enter a number to check ");
    scanf("%d",&n);
    temp=n;
    while(temp>0){
        rem=temp%10;
        sum = sum +(rem*rem*rem);
        temp=temp/10;

    }
    if(sum==n){
        printf("the number is armstrong  ");
    }
    else{
        printf("the number is NOT armstrong");
    }
    return 0;
    
}