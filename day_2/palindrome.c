#include<stdio.h>
int main(){
    int reverse=0,n,original,digit;
    printf("enter a number to check palindrome \n");
scanf("%d",&n);
original =n;
while(n>0){
    digit=n%10;
    reverse=reverse*10 +digit;
    n=n/10;
}
if(original==reverse){
    printf("palindrome number ");
}
else{
    printf("not palindrome number ");
}
return 0;
}