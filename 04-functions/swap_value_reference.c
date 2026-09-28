#include <stdio.h>
void swapByValue(int a, int b)
{
int temp = a;
a = b;
b = temp;
printf("Preview Swap (By Value): %d %d\n", a, b);
}
void swapByRef(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
printf("Actual Swap (By Ref): %d %d\n", *a, *b);
}
int main()
{
int x, y;
printf("Enter two currency values: "); 
scanf("%d %d", &x, &y); 
swapByValue(x, y);
printf("After Call by Value: %d %d\n", x, y); 
swapByRef(&x, &y);
printf("After Call by Ref: %d %d\n", x, y); 
return 0;
}