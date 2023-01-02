#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
    int a,b,c,d;
    printf("Enter the value of a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0)
    printf("The roots are real");
    else if (d==0)
    {
       printf("The roots are equal"); 
    }
    else
    printf("The roots are imagenary");
    return 0;
    
}