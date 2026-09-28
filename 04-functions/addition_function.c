#include <stdio.h>
int addNum(int a, int b);

int main() 
{
    int num1 = 1;
    int num2 = 2;
    int result;
    result = addNum(num1, num2);
    printf("The sum of %d and %d is: %d\n", num1, num2, result);
    return 0;
}

int addNum(int a, int b) 
{
    int sum;
    sum = a + b;
    return sum;
}
