#include <stdio.h>

int main(){
    char exitChar;
    
    
    for(;;){
        printf("Please type in the letter c\n");
        scanf("%c", &exitChar);
        if(exitChar == 'c'){
            break;
        }else{
            printf("You did not enter the c character\n");
        }
    }
}