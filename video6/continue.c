#include <stdio.h>

int main(){
    for(int x = 0; x < 10; x++ ){
        
        if (x == 5){
            printf("You have reached a continue point.  The code will keep running.\n");
            continue;
        }else{
            printf("The value of x is %d\n", x);
        }
    }
        
}