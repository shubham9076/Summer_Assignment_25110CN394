#include<stdio.h>
int main(){
    int n,count =0;
    printf("enter a number to check prime or not \n ");
    scanf("%d",&n);
    for(int i=2;i<n;i++){
        if (n%i==0){
            count=1;
            break;
        }
        }
        if(count==1){
            printf("the numner is NOT PRIME");
        }
        else{
            printf("the no is prime");
        }
    
    return 0;
}
