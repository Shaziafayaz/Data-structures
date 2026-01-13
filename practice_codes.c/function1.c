#include<stdio.h>

void printhello(); // declaration
void printgoodbye();

int main (){
     printhello(); // function call
printgoodbye();
    return 0;

}
    // function definition
void printhello(){
    printf("hello\n");
}

void printgoodbye(){
    printf("goodbye");
}