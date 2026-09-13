#include<stdio.h>
int main()
{
    float total;
    int choice;
    printf("Enter current total cost:");
    scanf("%f",&total);
    printf("Choosr crust type:\n");
    printf("Regular crust cost $0\n");
    printf("Thin crust adds $1\n");
    printf("stuffed crust adds $2\n");
    scanf("%d",&choice);
    if(choice==1)
    {
        total+=0;
    }
    else if(choice==2)
    {
        total+=1;
    }
    else if(choice==3)
    {
        total+=2;
    }
    else
    {
        printf("Invalid choice");
    }
    printf("Updated total bill is %.2f",total);
}
