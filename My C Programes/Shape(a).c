/*
1 
1 2 
1 2 3 
1 2 3 4 
*/
#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 4; i++) { // Loop for each row
        for (j = 1; j <= i; j++) { // Loop for printing numbers in each row
            printf("%d", j);
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
