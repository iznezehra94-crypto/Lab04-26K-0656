#include <stdio.h>

int main()
{
    int size,num,crust,option,hour;
    char cheese,StudentId;
    float total,discount;

    printf("Select a size option");
    printf("\n1 for small");
    printf("\n2 for medium");
    printf("\n3 for large\n");
    scanf("%d", &size);

    if(size == 1)
    {
        printf("Small size selected\n");
    }
    else if(size == 2)
    {
        printf("Medium size selected\n");
    }
    else if(size == 3)
    {
        printf("Large size selected\n");
    }
    else
    {
        printf("Invalid size.");
        return 0;
    }

    printf("Number of pizzas\n");
    scanf("%d", &num);

    if(num > 1)
    {
        printf("Check our multiple pizza deals\n");
    }

    if(num == 1)
    {
        total = 8;
    }
    else if(num == 2)
    {
        total = 15;
    }
    else if(num == 3)
    {
        total = 21;
    }
    else
    {
        printf("Invalid number");
        return 0;
    }

    printf("Choose crust type:\n");
    printf("Regular crust cost $0\n");
    printf("Thin crust adds $1\n");
    printf("Stuffed crust adds $2\n");
    scanf("%d", &crust);

    if(crust == 1)
    {
        total += 0;
    }
    else if(crust == 2)
    {
        total += 1;
    }
    else if(crust == 3)
    {
        total += 2;
    }
    else
    {
        printf("Invalid choice");
        return 0;
    }

    printf("Do you want extra cheese (Y/N)? ");
    scanf(" %c", &cheese);

    if(cheese == 'Y' || cheese == 'y')
    {
        total += 1.50;
    }
    else if(cheese == 'N' || cheese == 'n')
    {
        total += 0;
    }
    else
    {
        printf("Invalid characters");
        return 0;
    }

    printf("Enter current time: ");
    scanf("%d", &hour);

    if(hour >= 11 && hour <= 14)
    {
        discount = total * 0.1;
        total = total - discount;
    }
    else
    {
        discount = 0;
    }

    printf("Do you have student id (Y/N): ");
    scanf(" %c", &StudentId);

    if(StudentId == 'Y' || StudentId == 'y')
    {
        total = total - 2;
    }

    if(total < 0)
    {
        total = 0;
    }

    if(num == 3 && crust == 3)
    {
        printf("You get a free garlic bread!\n");
    }
    else
    {
        printf("Thank you for your order!\n");
    }

    printf("Fulfillment Option(1.pickup, 2.delivery): ");
    scanf("%d", &option);

    if(option == 2)
    {
        total = total + 3.00;
    }
    else
    {
        total = total;
    }

    printf("Pizza quantity: %d\n", num);
    printf("Final total: $%.2f\n", total);


}