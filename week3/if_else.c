#include <stdio.h>

int main() {
    int mark;
    printf("Please enter your mark: ");
    scanf("%d", &mark);


    while (mark >= 100 && mark <= 0){
        printf("Please enter your mark: ");
        scanf("%d", &mark);
        printf ("Please input a value between 0-100\n");
    }
return(0);
    if (mark >= 40 && mark <= 70)
    {
        printf ("The mark of %d is a pass\n", mark);
    }
    
        else if (mark >= 70 )
    {
        printf ("The mark of %d is a first\n", mark);
    }
    else if (mark >= 60 && mark <= 70 )
    {
        printf ("The mark of %d is a 2:1\n", mark);
    }
    else
    {
         printf ("The mark of %d is a fail\n", mark);
    }

    return 0;
}