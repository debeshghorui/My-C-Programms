/*       1
        121 
       12321
      1234321 
       12321 
        121 
         1
        
*/
#include <stdio.h>

int main() {
    int rows = 4; // Number of rows in the upper half of the diamond

    // Upper half of the diamond
    for (int i = 0; i <= rows; i++) {
        // Spaces
        for (int j = 0; j < rows - i; j++) {
            printf(" ");
        }

        // Numbers (increasing)
        for (int j = 1; j <= i + 1; j++) {
            printf("%d", j);
        }

        // Numbers (decreasing)
        for (int j = i; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n");
    }

    // Lower half of the diamond
    for (int i = rows - 1; i >= 0; i--) {
        // Spaces
        for (int j = 0; j < rows - i; j++) {
            printf(" ");
        }

        // Numbers (increasing)
        for (int j = 1; j <= i + 1; j++) {
            printf("%d", j);
        }

        // Numbers (decreasing)
        for (int j = i; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
