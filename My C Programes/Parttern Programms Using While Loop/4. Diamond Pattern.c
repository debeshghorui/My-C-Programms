/*

    *
   * *
  * * *
 * * * *
* * * * *
 * * * *
  * * *
   * *
    *

*/
#include <stdio.h>

int main() {
    int n = 5; // Number of rows for the upper half
    int i = 1;
    
    // Top half of the diamond
    while (i <= n) {
        int space = 1;
        while (space <= n - i) {
            printf(" ");
            space++;
        }
        
        int j = 1;
        while (j <= i) {
            printf("* ");
            j++;
        }
        printf("\n");
        i++;
    }
    
    // Bottom half of the diamond
    i = n - 1;
    while (i >= 1) {
        int space = 1;
        while (space <= n - i) {
            printf(" ");
            space++;
        }
        
        int j = 1;
        while (j <= i) {
            printf("* ");
            j++;
        }
        printf("\n");
        i--;
    }
    
    return 0;
}
