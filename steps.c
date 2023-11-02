#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define an appropriate struct
typedef struct {
	char date[11];
	char time[6];
	int steps;
} FITNESS_DATA;

// Define any additional variables here



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

    FILE *file = fopen("FitnessData_2023.csv", "r");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    FITNESS_DATA records[59];
    int counter=0;
    int recordCount = 0;
    char line[200];
    while (fgets(line, sizeof(line), file)) {
        recordCount++;
    }
    printf("Number of records in file: %d\n", recordCount);
    
    //for (int i = 0; i < 3; i++) {
        //(fgets(line, sizeof(line), file) != NULL);
        //if (strcpy(records[counter].time, "07:30"));
             //printf("%s/%s/%d\n", records[counter].date, records[counter].time, records[counter].steps);
            
    //}
    fclose(file);
    return 0;

}

    