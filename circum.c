TASK:55-C PROGRAM TO FIND THE AREA AND CIRCUMFERENCE OF A CIRCLE:

INPUT:

#include<stdio.h>
int main()
{
   int rad;
   float PI = 3.14, area, ci;

   printf("\nEnter radius of circle: ");
   scanf("%d", &rad);

   area = PI * rad * rad;
   printf("\nArea of circle : %f ", area);

   ci = 2 * PI * rad;
   printf("\nCircumference : %f ", ci);

   return (0);
}

OUTPUT:

Enter the value of radius of a circle: 56
  
Area of circle: 9847.041016
Circumference: 351.680023
