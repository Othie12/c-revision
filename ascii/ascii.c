#include <stdio.h>

//program to output the ascii value of the first letter on one's name
int main(void){
    char name[20];
    
    printf("Enter your name: ");
    scanf("%19s", name);

    char firstLetter = name[0];
    puts("\t------------------------------");
    printf("\t%-25s: %s\n\t%-25s: %c\n\t%-25s: %d\n",
        "Name", name, "First letter", firstLetter, "First letter to ascii", firstLetter);
}