#include <stdio.h>

void decimalToBinary(int decimalNum) {
    if (decimalNum == 0) {
        printf("0");
        return;
    }

    int binary[32];  // Assuming 32-bit binary representation
    int index = 0;

    while (decimalNum > 0) {
        binary[index] = decimalNum % 2;
        decimalNum /= 2;
        index++;
    }

    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
}

int main() {
    int decimalNum;
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNum);

    printf("The binary representation of %d is ", decimalNum);
    decimalToBinary(decimalNum);
    printf("\n");

    return 0;
}
