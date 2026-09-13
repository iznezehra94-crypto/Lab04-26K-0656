#include<stdio.h>
int main()
{
    int numb,crust_type;
    printf("Enter number of pizza: ");
    scanf("%d", &numb);
    printf("Enter crust type(1,2,3):");
    scanf("%d", &crust_type);
    if(numb==3 && crust_type==3)
    {
        printf("You get a free garlic bread");
    }
    else
    {
        printf("Thankyou for your order!");
    }
}