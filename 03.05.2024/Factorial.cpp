#include<stdio.h>
int main()
{
    int n, fact = 1;
    printf("Enter the Number: ");
    scanf("%d", &n);
    for(int i = n; i >= 2; i--){
        fact *= i;
    }
    printf("The Factorial of %d is %d", n, fact);
    return 0;
}

