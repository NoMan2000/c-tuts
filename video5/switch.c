#include <stdio.h>

int main(void){
    int a = 6;
    
    switch(a){
    case 5:
        printf("The value of a is 5\n");
        break;
    case '6':
        printf("The value of a is 6\n");
        break;
    case 7:
        printf("Because you forget the break statement, the code fell through\n");
        break;
    default:
        printf("You broke it!\n");
        break;
    
    }
    
}