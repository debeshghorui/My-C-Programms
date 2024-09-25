/*

* * * * *
* * * *
* * *
* *
*

*/
#include <stdio.h>

int main() {
    int n = 5; // Number of rows
    int i = n;
    
    while (i >= 1) {
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
