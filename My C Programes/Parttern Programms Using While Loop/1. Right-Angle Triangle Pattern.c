/*

*
* *
* * *
* * * *
* * * * *

*/
#include <stdio.h>

int main() {
    int n = 5; // Number of rows
    int i = 1;
    
    while (i <= n) {
        int j = 1;
        while (j <= i) {
            printf("* ");
            j++;
        }
        printf("\n");
        i++;
    }
    
    return 0;
}
