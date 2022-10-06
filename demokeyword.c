TASK:10-C PROGRAM TO DEMONSTRATE THE WORKING OF KEYWORD LONG

INPUT:


#include <stdio.h>
int main() {
    int a;
    long b;   // equivalent to long int b;
    long long c;  // equivalent to long long int c;
    double e;
    long double f;
printf("Size of int = %zu bytes \n", sizeof(a));
    printf("Size of long int = %zu bytes\n", sizeof(b));
    printf("Size of long long int = %zu bytes\n", sizeof(c));
    printf("Size of double = %zu bytes\n", sizeof(e));
    printf("Size of long double = %zu bytes\n", sizeof(f));
    
    return 0;
}

OUTPUT:

Size of int=4 bytes
Size of long int=8 bytes 
Size of long long int=8 bytes 
Size of double=8 bytes 
Size of long= 16 bytes

