#include <stdio.h>

float circleArea (float radius)
{
    float area;
    area = radius*radius * 3.1415;
    return area;
}
float circleVolume (float radius)
{
    float volume;
    volume = radius*radius*radius * 3.1415 * 4 /3 ;
    return volume;
}

int main()
{
    float radius;
    char(option);


    printf("Please input a radius: ");
    scanf("%f", &radius);

    printf("\n");
    printf("Select A for Area\n");
    printf("Select B for Volume\n");
    printf("Select Q to quit\n");

    scanf(" %c", &option);

    switch(option)
    {
        case 'A':
        case 'a': printf ("Area: %f\n", circleArea(radius));
                  break;
        

        case 'B':
        case 'b': printf ("Volume: %f\n", circleVolume(radius));
                  break;

        case 'Q':
        case 'q': break;

        default:  break;
    }

    return(0); 

}