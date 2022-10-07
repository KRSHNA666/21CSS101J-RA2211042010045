TASK:46-C Program to Find the Length of a String:

INPUT:

#include <stdio.h>
int main() {
    char s[] = "Programming is fun";
    int i;

    for (i = 0; s[i] != '\0'; ++i);
    
    printf("Length of the string: %d", i);
    return 0;
}


OUTPUT:

Length of the string: 18
