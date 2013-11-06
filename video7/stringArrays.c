#include <stdio.h>

int main (void){
    char strings[5][30];
    int i;
    
    printf("Print a list of five strings up to 30 characters in each string.\n");
    
    for(i = 0; i < 5; i++){
        printf("Please enter a string: %s\n", i+1);
        scanf("%s", strings[0]);
    }
    
}