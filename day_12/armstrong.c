#include<stdio.h>

int armstrong(int n)
{
    int sum=0, digit, temp=n;

    while(temp>0)
    {
        digit=temp%10;
        sum=sum+digit*digit*digit;
        temp=temp/10;
    }

    if(sum==n)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(armstrong(n))
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");

    return 0;
}