#include <stdio.h>
float sum (float a, float b);

float sum (float a, float b)
{
    float answer;
    answer = a + b;
    return answer;
}

int main () 
{
    float x = printf("please enter a value: \n");
    scanf("%f", &x);
    float y = printf("please enter a second value: \n");
    scanf("%f", &y);
    float z = sum(x, y); // calling our new function

    printf ("The sum of %f and %f is %f\n", x, y, z);

    return 0;
}