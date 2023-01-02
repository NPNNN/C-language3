#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any charector:");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z')
    printf("This chrector is upper case");
    else
    printf("This charecter is lowar case");
    return 0;
}