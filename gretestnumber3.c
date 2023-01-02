#include<stdio.h>
int main()
{
    int a,b,c,n;
    printf("Enter three number:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    printf("The gretest number is=%d",a);
    else if (b>a&&b>c)
    {
        printf("The gretest number is=%d",b);
    }
    else
    printf("The gretest number is=%d",c);
    return 0;
}
