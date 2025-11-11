#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int roll_one_die()
{
    return rand() % 6 + 1;
}

int main()
{
    int total_rolls = 1000000;
    int counts[13] = {0};

    srand(time(NULL));
    // Simulation loop
    for (int i = 0; i < total_rolls; i++)
    {
        int die_1 = roll_one_die();
        int die_2 = roll_one_die();
        int sum = die_1 + die_2;
        counts[sum]++; // update count
    }

    // Print probability distribution
    printf("Sum   Count        Percentage\n");
    printf("-----------------------------------\n");

    for (int sum = 2; sum <= 12; sum++)
    {
        double percentage = (counts[sum] / (double)total_rolls) * 100;
        printf("%2d    %8d      %.2f%%\n", sum, counts[sum], percentage);
    }

    // Theoretical probabilities for reference
    printf("\nTheoretical probability of 7 = 6/36 = 16.67%%\n");
    printf("Theoretical probability of 2 or 12 = 1/36 = 2.78%%\n");

    return 0;
}