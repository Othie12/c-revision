#include <stdio.h>
#include <math.h>

double workie(int n1, char operator, int n2);
double power(int n1, int n2);
void arithmetic();

int main(void) {
    arithmetic();
}


//program to make simple arithmetic
/***************************************************************************************/
void arithmetic(){
    int n1, n2;
    char operator;

    puts("\n\nThis is a program to enable you to do simple arithmetic operaions.\n"
    "Input 2 numbers with the operator in the middle that you'd like to use on them");

    printf("Accepted operators:\n\t +: add \t -: subtract \t *: multiply \n\t"
            "/: divide \t a: average \t s: smallest number \t b: biggest number \n");

    puts("Illustration '2 * 2' for multiplication, '2 a 3' for average");

    for (;;){
        scanf("%d%c%d", &n1, &operator, &n2);
        double result = workie(n1, operator, n2);

        if(result == -1111){
            printf("The operator you've used was not covered\n\tRepeat again\n");
        }else{
            printf("\aAnswer: %.1f\n\tYou can repeat again\n", result);
        }
    }
}

double workie(int n1, char operator, int n2){
    switch (operator)
    {
    case '+':
        return n1 + n2;
        break;
    case '-':
        return n1 - n2;
        break;
    case '*':
        return n1 * n2;
        break;
    case '/':
        return n1 > 0 || n1 > 0 ? (double)n1 / n2 : 0 ;
        break;
    case 'a':
        return (double)(n1 + n2) / 2;
        break;
    case 's':
        return n1 < n2 ? n1 : n2;
        break;
    case 'b':
        return n1 > n2 ? n1 : n2;
    default:
        return -1111;
        break;
    }
}