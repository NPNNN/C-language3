#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n%3==0 || n%7==0)
    printf("This number is divisible by 3 or 7");
    else
    printf("This number is not divisible by 3 or 7");
    return 0;
}