#include <stdio.h>

struct member
{
        char *name;
        char *id;
};


float compute(float a, float b, char op);
void details();

int main(void){
    float a, b, answer;
    char c;

   details();
   puts();

    printf("Program to let you do mathematical operations on any 2 numbers\n");
    printf("--------------------------------------------------------------\n");
    printf("Enter The first number: ");
        scanf("%f", &a);
    printf("Enter the second number: ");
        scanf("%f", &b);

    printf("\tMathematical operations\n"
            "\t----------------------\n"
            "\t+ - Add\n\t- - Subtract\n"
            "\t* - Multiply\n\t/ - Divide\n"
            "\tA - Average\n"
            "\t------------------------\n");

    printf("Enter prefered mathematical operation: ");
    scanf(" %c", &c);

    answer = compute(a, b, c);

    if(answer == 333333)
        printf("Unknown operator used.\n");
    else
        printf("Anwer: %.2f %c %.2f = %.2f\n", a, c, b, answer);
    
}

void details(){

    struct member members[4] = {{"OTHIENO SIMON", "LUCT1100007"},
                                {"OKETCHO SILAS", "LUCT1100007"},
                                {"MWINE ALLAN", "LUCT1100043"},
                                {"MATOVU ISAAC", "LUCT1100005"}};

    puts("PROGRAMMER DETAILS");
    puts("--------------------------------------------------------");
    for(int i = 0; i < 4; i++)
        printf("%-20s%s\n", members[i].name, members[i].id);

    puts("----------------------------------------------------------");
}

float compute(float a, float b, char op){
    switch (op)
    {
    case '+':
        return a + b;
        break;
    case '-':
        return a - b;
        break;
    case '*':
        return a * b;
        break;
    case '/':
        if(a == 0 && b != 0)
            return 0;
        else if(a != 0 && b == 0)
            return a;
        else
            return a / b;
        break;
    case 'A':
        return (a + b) / 2;
        break;
    default:
        return 333333;
        break;
    }
}