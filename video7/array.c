#include <stdio.h>

int main(void){
    int arrayInt[5];
    int i, index;
    
    printf("This program will store the values of five numbers. Enter a sequence of numbers to store.\n");
    for(i = 0; i < 5; i++){
        
        printf("The sequence number is at position %d\n", i+1);
        scanf("%d", &arrayInt[i]);
    }
    printf("Which of those sequences would you like to see?\n");
    scanf("%d", &index);
    if(index > arrayInt[index-1]){
        printf("You do not have that many sequences to store a number in\n");
    }
    else{
        printf("The value of index %d is %d.\n", index, arrayInt[index-1]);    
        printf("Thanks for using our program.\n");
    }
    
    

}