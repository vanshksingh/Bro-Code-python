#include <stdio.h>
#include <math.h>
int main(void)
{
    printf("To calculate hypotneuse of a right triangle\n");
    float a, b, c;
    printf("Enter the length of the first side: ");
    scanf("%f", &a);
    printf("Enter the length of the second side: ");
    scanf("%f", &b);
    c = sqrt(a * a + b * b);
    printf("The length of the hypotneuse is: %f\n", c);
    return 0;
    
}
