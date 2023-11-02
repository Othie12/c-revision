#include <stdio.h>

size_t size = 10;
int numbers[10];
void display(int arr[]);

int main(){
    int i;
    puts("Enter 10 numbers please.");
    for(i = 0; i < 10; i++){
        printf("\tEnter number %d: ", i+1);
        scanf("%d", &numbers[i]);
    }
    display(numbers);
}

void display(int arr[]){
    int i;
    for(i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    puts("");
}