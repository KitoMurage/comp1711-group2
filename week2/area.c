#include <stdio.h>
float main(){
    float length, width, area;

    length = printf(float("what is the length: "));
    scanf("%f", &length);
    width = printf(float("\nwhat is the width?: "));
    scanf("%f", &lwidth);
    
    area = length * width;

    printf("The area is: %g\n", area);
    
    return 0;

}