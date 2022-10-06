TASK:7-TO FIND ASCII VALUE OF A CHARACTER

INPUT:

#include <stdio.h>
int main() {  
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);  
     // %d displays the integer value of a character
    // %c displays the actual character
    printf("ASCII value of %c = %d", c, c);
    
    return 0;
}

OUTPUT:

Enter a character : G
ASCII value of G : 71

