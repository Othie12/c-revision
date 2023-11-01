#include <stdio.h>



int main(void){
    int x, y, z, max;

    puts("This is a program that find the highest number amongst three");
    puts("Input the three numbers.");

    scanf("%d %d %d", &x, &y, &z);

    if(x > y && x > z) {
        max = x;
    }else if(y > x && y > z) {
        max = y;
    }else{
        max = z;
    }

    printf("The maximum of %d, %d, and %d is %d\n", x, y, z, max);
}