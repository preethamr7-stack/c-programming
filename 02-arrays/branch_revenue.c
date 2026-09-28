//to print the full name and checks whether itll fit to screen or not
#include <stdio.h>
int main(){
    char firstName[50], lastName[50], fullName[100];
    int i, j;

    printf("Enter first name: ");
    scanf("%s", firstName);
    printf("Enter last name: ");
    scanf("%s", lastName);

  
    for(i = 0; firstName[i] != '\0'; i++) {
        fullName[i] = firstName[i];
    }
    fullName[i] = ' '; // Adding space between first and last name
    i++;

    for(j = 0; lastName[j] != '\0'; j++) {
        fullName[i + j] = lastName[j];
    }
    fullName[i + j] = '\0'; // Null-terminating the full namde

    // Checking the length of the full name
    int length = 0;
    while(fullName[length] != '\0') {
        length++;
    }

    printf("Full Name: %s\n", fullName);
    printf("Length of Full Name: %d\n", length);

    if(length > 20) {
        printf("Warning: Full name exceeds screen width!\n");
    } else {
        printf("Full name fits within the screen width.\n");
    }

    return 0;
}