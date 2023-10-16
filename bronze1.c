#include <stdio.h>

int main() {
    int value;
    printf("Please enter your value: ");
    scanf("%d", &value);

    if (value > 0)
    {
        printf ("The value of %d is positive\n", value);
    }
    
        else if (value < 0 )
    {
        printf ("The value of %d is negative\n", value);
    }

    else
    {
         printf ("The value of %d is zero\n", value);
    }

    return 0;
}