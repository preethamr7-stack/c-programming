#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand((unsigned)time(NULL));
    int secret = rand() % 100 + 1;
    int guess = 0, tries = 0, c;

    printf("Guess the number between 1 and 100.\n");

    while (guess != secret) {
        printf("Your guess: ");
        if (scanf("%d", &guess) != 1) {
            if (feof(stdin)) return 1;                          // input ended
            while ((c = getchar()) != '\n' && c != EOF) {}      // discard bad input
            printf("Please enter a number.\n");
            continue;
        }
        tries++;
        if (guess < secret) {
            if (secret - guess <= 5) printf("Close! Too low.\n");
            else printf("Too low.\n");
        } else if (guess > secret) {
            if (guess - secret <= 5) printf("Close! Too high.\n");
            else printf("Too high.\n");
        }
    }

    printf("Correct! You got it in %d tries.\n", tries);
    return 0;
}

