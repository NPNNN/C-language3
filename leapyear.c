#include<stdio.h>
int main()
{
    int y;
    printf("Enter a year:");
    scanf("%d",&y);
    if((y%4==0)&&(y%400==0)||(y%100!=0))
    printf("This year is a leap year");
    else
    printf("This year is not a leap year");
    return 0;
}