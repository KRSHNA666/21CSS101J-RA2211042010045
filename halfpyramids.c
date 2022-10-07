TASK:33-C Program to Print Pyramids and Patterns

INPUT:

#include <stdio.h>
int main() {
   int i, j, rows;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i) {
      for (j = 1; j <= i; ++j) {
         printf("* ");
      }
      printf("\n");
   }
   return 0;
}

OUTPUT:

*
* *
* * *
* * * *
* * * * *
