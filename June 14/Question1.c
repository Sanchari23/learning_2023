#include <stdio.h>
#include <stdint.h>

typedef long long lglg;

void printExponent(double num) {
    lglg* ptr = (lglg*)&num;
    lglg bits = *ptr;

    lglg exponent = (bits >> 52) & 0x7FF;

    printf("Hexadecimal: 0x%X\n", exponent);

    printf("Binary: 0b");
    for (int i = 10; i >= 0; i--) {
        printf("%d", (exponent >> i) & 1);
    }
    printf("\n");
}

int main() {
    double number;
    printf("Enter the number :");
    scanf("%lf",&number);
    printExponent(number);

    return 0;
}
