#include <stdio.h>

int main()
{
    int num1, num2, temp;
    printf("Please enter number 1: ");
    scanf("%d", &num1);
    printf("Please enter number 2: ");
    scanf("%d", &num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("The swapped values are - \n");
    printf("Number 1: %d\n", num1);
    printf("Number 2: %d\n", num2);

    return 0;
}