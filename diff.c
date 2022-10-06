TASK:3-SUBTRACTION OF TWO NUMBERS:
INPUT:


#include <stdio.h>
int main() {    

    int number1, number2, diff;
    
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    // calculating difference 
    diff = number1 - number2;      
    
    printf("%d + %d = %d", number1, number2, diff);
    return 0;
}


OUTPUT:

Enter two integers: 22 , 33

diff=-11
