#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int secret, guess;
    int attempts, maxAttempts = 7;
    char playAgain;
    int wins = 0, losses = 0;
    int bestScore = 999;
    char name[30];

    printf("=================================\n");
    printf("   NUMBER GUESSING GAME (1-100)\n");
    printf("=================================\n\n");

    printf("Enter your name: ");
    scanf("%29s", name);

    do
    {
        srand((unsigned)time(NULL));
        secret = rand() % 100 + 1;
        attempts = 0;
        int won = 0;

        printf("\nWelcome, %s! Guess the number in %d attempts.\n\n",
               name, maxAttempts);

        while (attempts < maxAttempts)
        {
            int remaining = maxAttempts - attempts;

            if (remaining == 3)
                printf("*** WARNING: Only 3 attempts left! ***\n");

            if (remaining == 1)
                printf("*** LAST CHANCE! ***\n");

            printf("Attempt %d/%d: ", attempts + 1, maxAttempts);
            scanf("%d", &guess);

            if (guess < 1 || guess > 100)
            {
                printf("Invalid! Enter a number between 1 and 100.\n\n");
                continue;
            }

            attempts++;

            if (guess == secret)
            {
                printf("\nCorrect, %s! Guessed in %d attempt(s)!\n",
                       name, attempts);

                if (attempts == 1)
                    printf("Rating: LUCKY GENIUS!\n");
                else if (attempts <= 3)
                    printf("Rating: EXCELLENT!\n");
                else if (attempts <= 5)
                    printf("Rating: GOOD!\n");
                else
                    printf("Rating: JUST MADE IT!\n");

                if (attempts < bestScore)
                {
                    bestScore = attempts;
                    printf("New Best Score: %d attempts!\n", bestScore);
                }

                wins++;
                won = 1;
                break;
            }
            else if (guess < secret)
            {
                if (secret - guess <= 5)
                    printf("Too Low! (Very Close!)\n\n");
                else if (secret - guess <= 15)
                    printf("Too Low! (Close)\n\n");
                else
                    printf("Too Low! (Far)\n\n");
            }
            else
            {
                if (guess - secret <= 5)
                    printf("Too High! (Very Close!)\n\n");
                else if (guess - secret <= 15)
                    printf("Too High! (Close)\n\n");
                else
                    printf("Too High! (Far)\n\n");
            }
        }

        if (!won)
        {
            printf("Game Over! The number was: %d\n", secret);
            losses++;
        }

        printf("\n--- SCOREBOARD ---\n");
        printf("Player : %s\n", name);
        printf("Wins   : %d\n", wins);
        printf("Losses : %d\n", losses);

        if (bestScore != 999)
            printf("Best   : %d attempts\n", bestScore);

        printf("------------------\n\n");
        printf("Play again? (y/n): ");
        scanf(" %c", &playAgain);

    } while (playAgain == 'y' || playAgain == 'Y');

    printf("\n=================================\n");
    printf("  FINAL SUMMARY - %s\n", name);
    printf("=================================\n");
    printf("Total Games : %d\n", wins + losses);
    printf("Wins        : %d\n", wins);
    printf("Losses      : %d\n", losses);

    if (bestScore != 999)
        printf("Best Score  : %d attempts\n", bestScore);

    printf("=================================\n");
    printf("Thanks for playing, %s!\n", name);

    return 0;
}
