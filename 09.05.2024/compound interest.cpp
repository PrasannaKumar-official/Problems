/*
Sample input:
Enter principal amount, rate of interest, and time (in years): 1000 5 2

Sample output:
result: 102.50
*/
#include <stdio.h>
#include <math.h>

int main() {
    double p,r,t,amount,ci;
    
    printf("Enter principal amount, rate of interest, and time (in years): ");
    scanf("%lf %lf %lf", &p, &r, &t);
    amount = p * (pow((1+r/100),t));
    ci = amount - p;
    printf("result: %.2lf",ci );
    
    return 0;
}

