#include <stdio.h>
int main(void)
{
    const double PI = 3.1415926;
    double radius;
    double circumference;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    circumference = 2.0 * PI * radius;
    printf("The circumference is %.2f.\n", circumference);
    return 0;
}
