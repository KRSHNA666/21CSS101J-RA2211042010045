TASK:51-C Program to Access Array Elements Using Pointer:

INPUT:

#include <stdio.h>
int main() {
    int data[5];

    printf("Enter elements: ");
    for (int i = 0; i < 5; ++i)
        scanf("%d", data + i);

    printf("You entered: \n");
    for (int i = 0; i < 5; ++i)
        printf("%d\n", *(data + i));
    return 0;
}

OUTPUT:

Enter elements: 1
2
3
5
4
You entered: 
1
2
3
