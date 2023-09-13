#include <stdio.h>

int main() {
    int term1 = 1, term2 = 2, nextTerm;
    int sum = 2; // Initialize the sum with the second term (2)

    while (1) {
        nextTerm = term1 + term2;

        if (nextTerm > 4000000) {
            break; // Exit the loop if the next term exceeds 4,000,000
        }

        if (nextTerm % 2 == 0) {
            sum += nextTerm; // Add even-valued terms to the sum
        }

        term1 = term2;
        term2 = nextTerm;
    }

    printf("The sum of even-valued terms not exceeding 4,000,000 is: %d\n", sum);

    return 0;
}
