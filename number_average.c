#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *inputFile, *outputFile;
    int number, sum = 0, count = 0;
    float average;

    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    while(fscanf(inputFile, "%d", &number) != EOF) {
        sum += number;
        count++;
    }
    fclose(inputFile);

    if (count != 0) {
        average = (float)sum / count;
    } else {
        average = 0.0;
    }

    outputFile = fopen("result.txt", "w");
    if (outputFile == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    fprintf(outputFile, "Sum: %d\n", sum);
    fprintf(outputFile, "Average: %.2f\n", average);
    fclose(outputFile);

    printf("Results writtent to result.txt\n");
    return EXIT_SUCCESS;
}