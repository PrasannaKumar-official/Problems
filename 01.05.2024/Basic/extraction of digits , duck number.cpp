#include<stdio.h>

int main() {
    int n, count = 0, rem, flag = 0;

    printf("Enter the number: ");
    scanf("%d", &n);
    
    // Loop to extract and print each digit of the number
    while (n > 0) {
        rem = n % 10; // Extract the last digit
        printf("%d\n", rem); // Print the digit
        n = n / 10; // Remove the last digit from the number
        count++; // Increment the count of digits
        
        if (rem == 0) {
            flag = 1; // Set flag if a zero digit is encountered
        }
    }
    
    // Check if the number is a duck number
    if (flag == 1)
        printf("It is a duck number\n");
    else
        printf("It is not a duck number\n");
    
    // Print the count of digits in the number
    printf("Count of digits: %d\n", count);
    
    return 0;
}

