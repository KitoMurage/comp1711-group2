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
    char file_name[200];
    char(option);
    printf("Please select an option:\n");
    scanf(" %c", &option);


    switch (option)
    {
        case 'A':
        case 'a': printf ("Option A has been selected\n");
        printf("Input file name: ");
        scanf("%s", file_name);
        

        FILE *file = fopen(file_name, "r");
        if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }
        break;

        case 'B':
        case 'b':printf ("Option B has been selected\n");
        //while (fgets(line, sizeof(line), file)) 
        //recordcount++;
        //printf("Number of records in file:%d\n", recordcount);
        break;

        case 'C':
        case 'c': printf ("Option C has been selected\n");
        break;

        case 'D':
        case 'd': printf ("Option D has been selected\n");
        break;

        case 'E':
        case 'e': printf ("Option E has been selected\n");
        break;

        case 'F':
        case 'f': printf ("Option F has been selected\n");
        break;

        case 'Q':
        case 'q': printf ("Option Q has been selected\n");
        break;

        default: printf ("A different option has been selected\n");
    }
}

