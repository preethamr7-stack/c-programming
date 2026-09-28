#include <stdio.h>
#include <string.h>

int main(void)
{
    char r[100];
    char u;

    printf("Enter the string: ");
    scanf("%99s", r);

    printf("Enter the element to search: ");
    scanf(" %c", &u);

    if (strchr(r, u) != NULL)
    {
        printf("'%c' was found in the string.\n", u);
    }
    else
    {
        printf("'%c' was not found in the string.\n", u);
    }

    return 0;
}
