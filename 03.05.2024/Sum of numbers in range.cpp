#include<stdio.h>
int main()
{
    int start, end, sum = 0;
    printf("Enter the range: ");
    scanf("%d %d", &start, &end);
    for(int i = start; i <= end; i++){
        sum += i;
    }
    printf("The sum of the give range is: %d", sum);
    return 0;
}

