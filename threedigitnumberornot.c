#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number that you want:");
    scanf("%d",&n);
    if(n>99&&n<1000)
    printf("Entered number is three digit number:");
    else
    printf("This is not three digit number:");
    return 0;
}