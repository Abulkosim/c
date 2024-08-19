#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int flips, heads = 0, tails = 0;

    // Prompt user for number of flips
    printf("How many times would you like to flip the coin? ");
    scanf("%d", &flips);

    // Seed the random number generator
    srand(time(NULL));

    // Simulate coin flips
    for (int i = 0; i < flips; i++) {
        if (rand() % 2 == 0) {
            heads++;
        } else {
            tails++;
        }
    }

    // Print results
    printf("After flipping the coin %d times, the results were\n", flips);
    printf("%d heads\n", heads);
    printf("%d tails\n", tails);

    return 0;
}