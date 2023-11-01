#include <stdio.h>

int main(){
    float x, y, z;
    double sum, average;

    puts("Enter any 3 numbers and I'll show you their sum and average... lol");
    scanf("%f%f%f", &x, &y, &z);

    sum = x + y + z;
    average = sum / 3;

    printf("%-10s: %.2f, %.2f, %.2f\n", "Numbers", x, y, z);
    printf("%-10s: %.2f\n", "Sum", sum);
    printf("%-10s: %.2f\n", "Average", average);
}