
#include<stdio.h>
int main()
{
    char choice;
    float total;
    printf("Enter your current order total\n");
    scanf("%f",&total);
    printf("Do you want extra cheese (Y/N)?");
    scanf(" %c",&choice);
    if(choice=='Y'||choice=='y')
    {
        total+=1.50;
    }
    else if(choice=='N'||choice=='n')
    {
        total+=0;
    }
    else{
        printf("Invalid characters");
    }
    printf("Current total is:%.2f",total);
}

