#include <stdio.h>

//declare the array
int arr[100];

//fn declaration
int biggest(int arr[], size_t length);
void swap(int *a, int *b);

int main(){
/*
    puts("Enter any numbers and I'll print their biggest number.");
    puts("Enter -1 if the numbers are over");

    //recording the input numbers into the array
    int count = 1;
    for(int i = 0;; i++){
        printf("\nEnter number - %d: ", count);
        scanf("%d", &arr[i]);
        if(arr[i] == -1){
            break;
        }
        count++;
    }

    printf("\nYou've put %d numbers\n", count);
    printf("The biggest number is: %d\n", biggest(arr, count));
    */

   int a, b;
   puts("Enter any 2 numbers");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("Original A: %d, B: %d\n", a, b);
   swap(&a, &b);
    printf("Swapped A: %d, B: %d\n", a, b);

    return 0;
}

int biggest(int arr[], size_t length) {
    int biggest = 0;
    for(int i = 0; i < length; i++){
        biggest = arr[i] > biggest ? arr[i] : biggest;
    }
    return biggest;
}

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}


