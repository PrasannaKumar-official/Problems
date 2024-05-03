#include<Stdio.h>
int main()
{
    int a, n, d, sum;
    printf("Enter a , n , d: ");
    scanf("%d %d %d", &a, &n, &d);
    sum = n/2*((2*a)+((n-1)*d));
    printf("%d", sum);
    return 0;
}

