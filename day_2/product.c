#include<stdio.h>
int main (){
    int n,product=1,digit ;
    printf("enter a number to find product \n ");
    scanf("%d",&n);
    while(n>0){
        digit= n%10;
        product=product*digit;
        n=n/10;
        
    }
    printf("the product of digit is = %d",product );
    return 0;

}