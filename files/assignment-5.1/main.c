#include <stdio.h>

//writing message to a file using fputs
int main(void){
    FILE *f;
    int i;
    char *message = "Introduction to Handling files in C";
    char msg[] = "Another way of initializing an array";
    f = fopen("message.txt", "w");

    fputs(msg, f);
    fclose(f);
    puts("Written the string in file.");
}