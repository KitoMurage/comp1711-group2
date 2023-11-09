#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "FitnessDataStruct.h"

// Struct moved to header file

// Define any additional variables here
// Global variables for filename and FITNESS_DATA array


// This is your helper function. Do not change it in any way.
// Inputs: character array representing a row; the delimiter character
// Ouputs: date character array; time character array; steps character array
void tokeniseRecord(const char *input, const char *delimiter,
                    char *date, char *time, char *steps) {
    // Create a copy of the input string as strtok modifies the string
    char *inputCopy = strdup(input);
    
    // Tokenize the copied string
    char *token = strtok(inputCopy, delimiter);
    if (token != NULL) {        strcpy(date, token);
    }
    
    token = strtok(NULL, delimiter);
    if (token != NULL) {
        strcpy(time, token);
    }
    
    token = strtok(NULL, delimiter);
    if (token != NULL) {
        strcpy(steps, token);
    }
    
    // Free the duplicated string
    free(inputCopy);

                    }




// Complete the main function
int main() {
    int a;
    a = -2;

    while(a<0 || a>7){

    printf("please select your option: ");
    scanf("%d", &a);
    }

    switch (a)
    {
        case A: printf ("Option A has been selected\n");
        break;

        case B: printf ("Option B has been selected\n");
        while (fgets(line, sizeof(line), file)) 
        recordcount++;
        printf("Number of records in file:%d\n", recordcount);
        break;

        case C: printf ("Option C has been selected\n");
        break;

        case D: printf ("Option D has been selected\n");
        break;

        case E: printf ("Option E has been selected\n");
        break;

        case F: printf ("Option F has been selected\n");
        break;

        case Q: printf ("Option Q has been selected\n");
        break;

        default: printf ("A different option has been selected\n");
    }
}

