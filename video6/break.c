#include <stdio.h>

int main(){
    for(int x = 0; x < 10; x++ ){
        
        if (x == 5){
            printf("You have reached the break point.  This will break out of the current loop.\n");
            break;
        }else{
            printf("The value of x is %d\n", x);
        }
    }
    // The exit call will exit the program entirely.
    printf("This runs because even though we are out of the for loop, we are not out of the entire program.\n");
        
}