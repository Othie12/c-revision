#include <stdio.h>

void product();
void first_question();

int main(){
   product();
}

void first_question(){
    float number = 34.5678;
    printf("%-20s: %.0f\n%-20s: %.2f\n", "Nearest Number", number, "Two decimal places", number);
}

void product(){
    float a = 4.32, b = 3.4;
    float pdct = a * b;
    printf("%.2f x %.1f = %.1f\n", a, b, pdct);
}