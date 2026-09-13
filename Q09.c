#include<stdio.h>
int main()
{
    float total;
    int option;
    printf("Enter total bill: ");
    scanf("%f", &total);
    printf("Fulfillment Option(1.pickup,2.delivery): ");
    scanf("%d", &option);
    if(option==2)
    {
        total=total+3.00;
    }
    else
    {
        total=total;
    }
    printf("Total cost of order is: %.2f",total);
}
