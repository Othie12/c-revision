#include <stdio.h>

int main(void){
    int number = 32;
    int* n = &number;

    printf("n = %p \n *n = %d\n",n, *n);
    printf("&number = %p\n", &number);
        printf("number = %d\n", number);

}