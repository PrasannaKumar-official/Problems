#include<stdio.h>

int main() {
    int a, sum = 0, rem, num;
    printf("Enter a number: ");
    scanf("%d", &a);
    num = a; // Store the original number
    
    // Calculate the sum of digits
    while (a > 0) {
        rem = a % 10; // Extract the last digit
        sum += rem; // Add the digit to the sum
        a = a / 10; // Remove the last digit from the number
    }
    // Check if the number is divisible by the sum of its digits
    if (num % sum == 0)
    	printf("It is a Harshad Number\n");
    else
        printf("It is not a Harshad Number\n");
    
    return 0;
}

