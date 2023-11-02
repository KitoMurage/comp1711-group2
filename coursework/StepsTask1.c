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
    //defining variables
    FITNESS_DATA records[59];
    int counter=0;
    int recordCount = 0;
    char line[200];
    int line_count = 0;

    //geting the number of records
    while (fgets(line, sizeof(line), file)) 
        recordCount++;
    
    
    printf("Number of records in file: %d\n", recordCount);
//rewinding file due to recordcount swaping with the lines read
    rewind(file);

    //printing out the first 3 lines
    while (line_count < 3 && fgets(line, sizeof(line), file) != NULL) {
        //replacing , for /
         for (int i = 0; line[i]; i++) {
            if (line[i] == ',') {
                line[i] = '/';
            }
        }
        printf("%s", line);
        line_count++;
    }


  //closing file
    fclose(file);
    return 0;

}
