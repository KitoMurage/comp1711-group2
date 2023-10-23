#include <stdio.h>

int main () {
    char* filename = "squares.dat";
    FILE *file = fopen (filename, "w");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    
    int n, number, square;
    printf("Please input a value: ");
    scanf("%d", &n);
    int num_lines;
    num_lines = n;
    square = number * number;

    
    for (int i = 0; i < num_lines; i++)
    {
        scanf("%d", &number);
        fprintf(file, "%d\n", square);

    }

    printf("The square is: %d\n", square);

    fclose(file);
    return 0;
}