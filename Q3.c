#include <stdio.h>
int main()
{
    int cost;
    printf("Desired pizza quantity");
    scanf("\n%d", &cost);
    switch(cost)
    {
        case 1: printf("1 pizza cost 8$");
        break;
        case 2: printf("A comco of 2 pizza costs 15$");
        break;
        case 3: printf("A package of 3 pizza costs 21$");
        break;
        default: printf("Invalid numbr");
    }
}