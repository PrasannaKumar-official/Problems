#include<stdio.h>
int main()
{
    int n, sum;
    printf("Enter the range: ");
    scanf("%d", &n);
    sum = (n * (n + 1)) / 2;
    printf("Sum of N natural Numbers is: %d", sum);
    return 0;
}

