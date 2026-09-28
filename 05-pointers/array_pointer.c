#include<stdio.h>
int main()
{
    int arr[] = {10,15,20,30};
    int *p = arr;
    printf("%d\n", *arr);
    printf("%d\n", *(arr + 1));
    
}