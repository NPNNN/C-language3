#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter two number:");
    scanf("%d%d",&n1,&n2);
    if(n1>n2)
    {
      printf("The gretest number is=%d",n1);
    }
     else if (n1==n2)
    {
        printf("Both are same: %d",n1);
    }
    else
    {
      printf("The gretest number is=%d",n2);
    }
    return 0;
    
}