#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define an appropriate struct
typedef struct {
	char date[11];
	char time[6];
	int steps, position;
} FITNESS_DATA;

// Define any additional variables here



// This is your helper function. Do not change it in any way.
// Inputs: character array representing a row; the delimiter character
// Ouputs: date character array; time character array; steps character array
void tokeniseRecord(const char *input, const char *delimiter,
                    char *date, char *time, char *steps, char *pos) {
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

    FITNESS_DATA records[59];
    int buffer_size = 2500;
    char line[buffer_size];
    int counter=0;

    FILE *input = fopen("FitnessData_2023.csv", "r");
    
    char pos[3];
    char steps[4];
    char date[11];
    char time[6];
    
    
    while (fgets(line, buffer_size, input))
    {   
       
        tokeniseRecord(line,",",pos,steps,date,time);
       
        
        records[counter].steps = atoi(steps);
        strcpy(records[counter].date,date);
        strcpy(records[counter].time,time);
        records[counter].position = atoi(pos);
        counter++;


    }
    fclose(input);
    return 0;


}