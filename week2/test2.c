#include <stdio.h>
int main(){
    int x = 11;
    
    while ( x < 1000){
        printf("x is equal to %d\n", x);
        x+=11;
    }
    printf("I have finished the loop x is equal to %d\n", x);
    return (0);
}