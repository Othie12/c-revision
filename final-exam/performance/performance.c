#include <stdio.h>
#include <string.h>

char* grade(int mark);

struct module {
    char* name;
    int mark;
};

    char name[30];
    char course[50];
    char stdntNo[20];
    int semester;

int main(void){
    strcpy(name, "Othieno Simon");
    strcpy(course, "Bsc.software Engineering with Multimedia");
    strcpy(stdntNo, "LUCT1100007");
    semester = 6;
    struct module modules[5] = {{"Data structures and algorithms", 83},
                        {"Computerized Mathematics", 95},
                        {"Software Testing and reliability", 89},
                        {"Structured programming", 97},
                        {"Descrete mathematics", 78}};

    puts("-------------------------------------------------------------------");
    puts("\t LIMKOKWING UNIVERSITY OF CREATIVE TECHNOLOGY");
    puts("-------------------------------------------------------------------");
    printf("\t%-15s : %s\n", "Name", name);
    printf("\t%-15s : %s\n", "Course", course);
    printf("\t%-15s : %s\n", "Student Number", stdntNo);
    printf("\t%-15s : %d\n", "Semester", semester);
    puts("-------------------------------------------------------------------");
    printf("%-35s %-7s %s\n", "Module", "Mark", "Grade");
    for(int i = 0; i < 5; i++){
        printf("%-35s : %-7d %s\n", modules[i].name, modules[i].mark, grade(modules[i].mark));
    }
    puts("");

}

char* grade(int mark) {
    if(mark > 90){
        return "A";
    }else if (mark > 80){
        return "B+";
    }else if (mark > 70){
        return "B";
    }else if (mark > 60){
        return "C";
    }else if (mark > 50){
        return "D";
    }else{
        return "F";
    }
    
}