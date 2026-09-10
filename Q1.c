#include <stdio.h>
int main()
{
    int size;
    printf("Select a size option");
    printf("\n1 for small");
    printf("\n2 for medium");
    printf("\n3 for large\n");
    scanf("\n%d", &size);
    switch(size)
    {
        case 1: printf("small size selected");
        break;
        case 2: printf("medium size selected");
        break;
        case 3: printf("large size selected");
        break;
        default: printf("invalid size");
    }
}