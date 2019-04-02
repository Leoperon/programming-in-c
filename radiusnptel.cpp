#include <stdio.h>
#define PI 3.14
int main()
{
    int radius;
    float area;
    printf("Enter the radius of a circle \n ");
    scanf("%d", &radius);
    area=PI*radius*radius;
    printf("Area of a circle = %f ",area);
    return 0;
}
