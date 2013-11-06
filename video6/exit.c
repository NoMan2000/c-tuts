#include <stdio.h>
#include <stdlib.h> //There's a lot of useful functions in this.

int main(){
    for(int x = 0; x < 10; x++ ){
        
        if (x == 5){
            printf("You have reached the exit point.  This will exit out of the program.\n");
            exit(0);
        }else{
            printf("The value of x is %d\n", x);
        }
    }
    // The exit call will exit the program entirely.
    printf("This command will never execute because the exit command will jump out of the program\n");
        
}