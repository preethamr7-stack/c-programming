#include <stdio.h>
#include <string.h>

int main(void)
{
    char s1[100];
    char s2[100];

    printf("Enter the first string: ");
    scanf("%99s", s1);

    printf("Enter the second string: ");
    scanf("%99s", s2);

    int result = strcmp(s1, s2);

    if (result == 0)
    {
        printf("Equal strings!!\n");
    }
    else if (result < 0)
    {
        printf("s1 comes before s2\n");
    }
    else
    {
        printf("s1 comes after s2\n");
    }

    return 0;
}
