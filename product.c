TASK:6-MULTIPLYING TWO FLOAT INTEGERS:

INPUT:

#include <stdio.h>
int main() {
    double a, b, product;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);  
 
    // Calculating product
    product = a * b;

    // %.2lf displays number up to 2 decimal point
    printf("Product = %.2lf", product);
    
    return 0;
}


OUTPUT:

Enter two numbers : 1.12 , 2.4

Product: 2.69
