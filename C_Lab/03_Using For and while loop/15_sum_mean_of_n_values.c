#include <stdio.h>

int main() {
    int n, i;
    float values[1000], sum = 0, mean; // supports up to 1000 numbers

    // Ask how many values
    printf("Enter how many values: ");
    scanf("%d", &n);

    if (n > 1000) {
        printf("Error: Maximum limit is 1000 values.\n");
        return 1;
    }

    printf("Enter %d values separated by spaces:\n", n);

    // Read n values
    for (i = 0; i < n; i++) {
        scanf("%f", &values[i]);
        sum += values[i];
    }

    // Calculate mean
    mean = sum / n;

    // Display results
    printf("\n---------------------------\n");
    printf("Sum  = %.2f\n", sum);
    printf("Mean = %.2f\n", mean);
    printf("---------------------------\n");

    return 0;
}

