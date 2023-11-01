#include <stdio.h>
#define LENGTH 5

int numbers[LENGTH];
int sum(int arr[LENGTH]);
void prnt(int arr[LENGTH]);

/*
* Program to ask scan for numbers and then sum them up 
*/

int main(void){
    //loop to ask the user for the 5 numbers and append them to the array
    for(int i = 0; i < LENGTH; i++){
        int number;
        printf("Enter number %d: ", i+1);
        scanf("%d", &number);
        numbers[i] = number;
    }


    printf("The numbers are: ");
    prnt(numbers);

    printf("Sum: %d\n", sum(numbers));

    float mean = (float)sum(numbers) / LENGTH;
    printf("Mean: %.2f\n", mean);
}

int sum(int arr[LENGTH]){
    int sum;
    for(int i = 0; i < LENGTH; i++)
        sum+=arr[i];

    return sum;
}

void prnt(int arr[LENGTH]){
    for(int i = 0; i < LENGTH; i++)
        printf("%d ", arr[i]);

    puts("");
}