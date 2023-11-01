#include <stdio.h>

//program to record marks of 5 students in 4 subjects each and then output
//the average mark of each student

float avg_student(int arr[], size_t size);
float avg_subject(int arr[][4], size_t size, int subject);

int main(void){
    int marks[5][4];
    int i, j, a, b;

    for(i = 0; i < 5; i++){
        printf("\nRecording marks for student %d\n", i+1);
        for(j = 0; j < 4; j++){
            printf("\tEnter marks for subject %d: ", j+1);
            scanf("%d", &marks[i][j]);
        }
    }

    puts("");
    puts("__________________Student Average___________________");
    for(a = 0; a < 5; a++){
        printf("Student %d: ", a+1);
        for(b = 0; b < 4; b++){
            printf("%d ", marks[a][b]);
        }
        printf("Average = %.2f\n", avg_student(marks[a], 4));
    }

    puts("");
    puts("__________________Subject Average___________________");
    for(int r = 1; r <= 4; r++){
        printf("Average for subject %d: %.2f\n", r, avg_subject(marks, 5, r));
    }

}

float avg_student(int arr[], size_t size){
    int i, sum = 0;
    for(i = 0; i < size; i++){
        sum += arr[i];
    }
    float avg = (float)sum / (float)size;
    return avg;
}

float avg_subject(int arr[][4], size_t size, int subject){
    int i, j, sum = 0;
    for(i = 0; i < size; i++){
        sum += arr[i][subject-1];
    }
    float avg = (float)sum / (float)size;
    return avg;
}