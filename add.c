
TASK:2-ADDITION OF TWO NUMBERS:

INPUT:

#include <stdio.h>
int main() {    

    int number1, number2, sum;
    
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    // calculating sum
    sum = number1 + number2;      
    
    printf("%d + %d = %d", number1, number2, sum);
    return 0;
}

OUTPUT:

Enter two values: 10 , 11

sum=21
