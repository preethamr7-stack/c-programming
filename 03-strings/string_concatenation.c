#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20] = "programming";
    char s2[] = "world";
    strcat(s1, s2);
    printf("%s\n", s1);
    return 0;
}