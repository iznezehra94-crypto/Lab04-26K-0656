#include<stdio.h>
int main()
{
    float bill;
    char StudentId;
    printf("Enter total bill: ");
    scanf("\n%f",&bill);
    printf("Do you have studenr id(Y/N): ");
    scanf("\n%c", &StudentId);
    if(StudentId== 'Y' || StudentId== 'y')
    {
    bill=bill-2;
    }
    if(bill<0)
    {
        bill=0;
    }
    printf("Your final bill is: %f",bill);
    
}
