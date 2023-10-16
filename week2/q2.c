#include <stdio.h>
int main(){

    int answer, guess;
    answer = 4;
    guess = 0;

    while ( guess != answer){
    printf("what is the number?: ");
        scanf("%d", &guess);
    }
    return (0);

}