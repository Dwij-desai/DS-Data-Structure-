#include <stdio.h>

int main() {
    int number;
    char result[6];
    int i;

    printf("Enter a five-digit number: ");
    scanf("%5d", &number);

    for (i = 4; i >= 0; i--) {
        int digit = number % 10;             // Extract the last digit
        digit = (digit + 9) % 10;            // Perform the transformation
        result[i] = digit + '0';             // Convert back to character and store in result
        number /= 10;                        // Remove the last digit from the number
    }

    result[5] = '\0'; // Null-terminate the string

    printf("Output: %s\n", result);

    return 0;
}