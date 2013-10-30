#include <stdio.h>
#include <stdbool.h>

int main(){
char lc_a = 'a';
char uc_A = 'A';
bool testChar;

printf("The value of a is equal to %d and the value of A is equal to %d\n", lc_a, uc_A);


testChar = lc_a > uc_A;

printf("The truth value of whether a is greater than A is %d\n", testChar);

return (0);    
}