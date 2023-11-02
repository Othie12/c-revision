#include <stdio.h>
#include <string.h>

struct Student{
    char name[55];
    char course[55];
    int age;
};

int main(void){
    struct Student st1;

    strcpy(st1.name, "Kankore Allan");
    strcpy(st1.course, "Bsc.Software Engineering with Multimedia");
    st1.age = 76;

    printf("%10s : %s\n"
            "%10s : %s\n"
            "%10s : %d\n",
            "Name", st1.name,
            "Course", st1.course,
            "Age", st1.age);
}