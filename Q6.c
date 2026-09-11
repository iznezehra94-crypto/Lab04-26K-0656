#include<stdio.h>
int main()
{
    float TotalBill,discount;
    int CurrentTime;
    printf("Enter current total bill:");
    scanf("\n%f", &TotalBill);
    printf("Enter current time:");
    scanf("\n%d", &CurrentTime);
    if(CurrentTime>=11 && CurrentTime<=14)
    {
        discount=TotalBill*0.1;
        TotalBill=TotalBill-discount;
        printf("Total bill after discount:%f",TotalBill);
    }
    else
    {
        discount=0;
        printf("No discount");
        printf("Total bill:%f",TotalBill);
       
    }


}