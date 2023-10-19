#include <stdio.h>

int main() {
    int temperature;
    printf("Please enter your temperature: ");
    scanf("%d", &temperature);

    if (temperature >= -10 && temperature <= 40)
    {
        printf ("The temperature of %d is valid\n", temperature);
    }
    else
    {
         printf ("The temperature of %d is not valid\n", temperature);
    }

    return 0;
}