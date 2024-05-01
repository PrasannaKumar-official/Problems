#include <stdio.h>

int main() {
    int n, count = 0, count_max = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Declare an array to store the elements
    int num[n];

    // Prompt user to enter the elements
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }

    // Loop through the array to count consecutive ones
    for (int j = 0; j < n; j++) {
        if (num[j] == 1) {
            count++; // Increment count for consecutive ones
            if (count > count_max) {
                count_max = count; // Update count_max if necessary
            }
        } else {
            count = 0; // Reset count if encounter zero
        }
    }
    
    // Print the maximum consecutive ones
    printf("Maximum consecutive ones: %d\n", count_max);
    return 0;
}

