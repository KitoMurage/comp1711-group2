#include <stdio.h>
int main(){

    int my_array[4] = {20, 33, 2, 5};
    int counter;

    for(counter=0;counter<4;counter++){
        printf("%d\n", my_array[counter]);
    }
    return(0);
}