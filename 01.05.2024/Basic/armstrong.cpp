#include<stdio.h>
#include<math.h>

int main() {
    int a,rem,sum=0,length,num;
    printf("Enter a number: ");
    scanf("%d", &a);
    num = a; // Store the original number
    length = log10(a)+1;
    // Calculate the sum of cubes of digits
    while (a > 0) {
        rem = a % 10; // Extract the last digit
        sum += pow(rem, length); // Add the cube of the digit to sum
        a /= 10; // Remove the last digit from the number
    }
    // Check if the sum of cubes of digits equals the original number
    if (sum == num)
        printf("It is an Armstrong number\n");
    else
        printf("It is not an Armstrong number\n");
    
    return 0;
}

