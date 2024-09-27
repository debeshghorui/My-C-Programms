#include <stdio.h>

void countBits(unsigned int num, int *zeros, int *ones) {
    *zeros = 0;
    *ones = 0;
    
    // Assuming an unsigned int is 32 bits
    for (int i = 0; i < 32; i++) {
        if (num & (1 << i)) {
            (*ones)++;
        } else {
            (*zeros)++;
        }
    }
}

int main() {
    unsigned int num;
    int zeros, ones;

    printf("Enter an unsigned integer: ");
    scanf("%u", &num);

    countBits(num, &zeros, &ones);

    printf("Number of ones: %d\n", ones);
    printf("Number of zeros: %d\n", zeros);

    return 0;
}
