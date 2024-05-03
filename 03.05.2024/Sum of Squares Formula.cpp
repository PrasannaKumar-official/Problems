#include<stdio.h>
int main()
{
    int n, sum;
    printf("Enter the range: ");
    scanf("%d", &n);
    sum = (n * (n + 1) * ((2 * n) + 1)) / 6;
    printf("Sum of N square numbers are: %d", sum);
    return 0;   
}

