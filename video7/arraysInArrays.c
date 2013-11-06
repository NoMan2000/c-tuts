#include <stdio.h>

// Nested for loops and multi-dimensional arrays.

int main(void){
    int grid[10][12];
    int i,j;
    
   for(i = 0;i<10;i++){
       for(j=0;j<12;j++){
           grid[i][j]=(i+1)*(j+1);
           printf("%d\t", grid[i][j]);
       }
       printf("\n");
   }
       
}