#include <stdio.h>

int main(void){
    int x = 0; // This is the initializer and the condition that is checked.  
    while(x < 7){
        printf("The value of x is %d\n", x);
        x++; //This is the post-increment version of the increment function.  AFter executing 7 times, this will evaluate to false.
    }    
}