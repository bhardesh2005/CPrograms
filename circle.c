#include <stdio.h>

float calculate_area(float radius)
{
    return (3.14 * radius * radius);
}

float calculate_circumference(float radius)
{
    return (2.0 * 3.14 * radius);
}

int main()
{
    float rad;
    printf("Please enter radius of circle: ");
    scanf("%f", &rad);

    printf("Area of circle is %f units\nCircumference of circle is %f units\n",
           calculate_area(rad), calculate_circumference(rad));
    return 0;
}