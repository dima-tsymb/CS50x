#include <stdio.h>
#include <math.h>     

int get_int(char[]);

int main(void) {
    int start_size = 0;
    do {
        start_size = get_int("Initial population size: ");
    } while (start_size <= 0);

    int end_size = 0;
    do {
        end_size = get_int("Target population size: ");
    } while (end_size <= 0);

    int population = start_size;
    int years = 0;
    while (population < end_size) {
        years++;
        int born = trunc(population / 3);
        int passedAway = trunc(population / 4);
        population = population + born - passedAway;
    }

    printf("Years %d", years);
}

int get_int(char* prompt) {
    int number = 0;
    printf(prompt);
    scanf("%d", &number);
    return number;
}