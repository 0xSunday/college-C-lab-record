/*
Write a program which takes the radius of a
circle as input from the user, passes it to
another function that computes the area and
the circumference of the circle and displays the
value of area and circumference from the main() function.
*/

#include <stdio.h>
const float PI = 3.1415927;
float area(float radius);
float circum(float radius);

int main()
{
  float radius;
  printf("Enter radius: ");
  scanf("%f", &radius);
  printf("Area : %.3f\n", area(radius));
  printf("Circumference: %.3f\n", circum(radius));
  return 0;
}

float area(float radius)
{
  return PI * radius * radius;
}

float circum(float radius)
{
  return 2 * PI * radius;
}