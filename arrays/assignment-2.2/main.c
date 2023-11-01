#include <stdio.h>

//program to output the highest number in a multidimentional array.

int main(void){
    int i, p, highest = 0;
    int scores[3][5] = {
        {55, 33, 86, 81, 67},
        {34, 64, 83, 78, 63},
        {58, 52, 88, 72, 64}
    };

    for(i = 0; i < 3; i++){
        for(p = 0; p < 5; p++){
            highest = scores[i][p] > highest ? scores[i][p] : highest;
        }
    }
    printf("The highest score is: %d", highest);
}