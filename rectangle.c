#include <stdio.h>

float calculate_area(float length, float breadth)
{
    return (length * breadth);
}

float calculate_perimeter(float length, float breadth)
{
    return (2 * (length + breadth));
}

int main()
{
    float length;
    float breadth;
    printf("Please enter length of rectangle: ");
    scanf("%f", &length);
    printf("Please enter breadth of rectangle: ");
    scanf("%f", &breadth);
    printf(
        "Area of rectangle is %f units\nPerimeter of rectangle is %f units\n",
        calculate_area(length, breadth), calculate_perimeter(length, breadth));
    return 0;
}
