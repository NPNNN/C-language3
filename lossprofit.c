#include<stdio.h>
int main()
{
    float costprice,sellingprice,profit,loss, profit_per, loss_per;
    printf("Enter the costprice and sellingprice:");
    scanf("%f%f",&costprice,&sellingprice);
    if(costprice<sellingprice)
    {
        profit=sellingprice-costprice;
         profit_per = ((profit *100)/costprice);    
         printf("Profit percentage=%f",profit_per);
    }
    else if (costprice>sellingprice)
    {
        loss=costprice-sellingprice;
         loss_per = ((loss *100)/costprice);
            printf("Loss percentage=%f",loss_per);
    }
    else
    {
        printf("No profit loss occurs");
    }
    return 0;
}