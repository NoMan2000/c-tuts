#include <stdio.h>
#include <stdbool.h>

void testDefault(void);
void testBool(void);
void testOperators(void);

int main(void){
   
 //  testDefault(); 
 //   testBool();
  testOperators(); 
}

void testDefault(void){
    int x = 2; 
    int y = 3; 
    int testValue; 
    testValue = (x > y); // testValue equals 0.
    printf("The testValue is equal to %d\n", testValue);
    testValue = (x < y); // testValue equal 1.
    printf("The testValue is now equal to %d\n\n", testValue);

}

void testBool(void){
    bool testTruth, testFalse, testEquality;
    testTruth = true;
    printf("The value of true is %d\n", testTruth);
    testFalse = false;
    printf("The value of false is %d\n\n", testFalse);
    
    testEquality = (13 > 14); /* In English, this is asking "Is it true that the value of 13 is greater than the value of 14? */
    printf("testEquality is equal to %d\n", testEquality);
    testEquality = (13 < 14);  /* In English, this is asking "Is it true that the value of 13 is less than the value of 14? */
    printf("testEquality is equal to %d\n", testEquality);
    testEquality = (13 == 14); /* In English, this is asking "Is it true that the value of 13 is equal to the value of 14? */
    printf("testEquality is equal to %d\n", testEquality);
    testEquality = (13 != 14); /* In English, this is asking "Is it true that the value of 13 is not equal to the value of 14? */
    printf("testEquality is equal to %d\n\n", testEquality);
}

void testOperators(){
    bool testAnd, testOr, testBoth;
    
    testAnd = (13 > 4) && (4 != 13); /* In English, this is asking "Is it true that the value of 13 is greater than the value of 4 and it is also true that 4 does not equal 13? */
    printf("The value of testAnd is %d\n", testAnd);
    testAnd = (13 > 4) && (4 == 13); /* In English, this is asking "Is it true that the value of 13 is greater than the value of 4 and it is also true that 4 does not equal 13? */
    printf("The value of testAnd is %d\n", testAnd);
    /* C uses lazy evaluation.  In the case of an && statement, if the left-side of the equation is false, then the right-side is never evaluated for truth. */
    testOr = (13 != 4) || (5 != 5);
    printf("The value of testAnd is %d\n", testOr);
    /* In the case of an OR || statement, if the left-side is true, the right side is never evaluated.  Even though the right-hand side is false, an or statement is still true. */
    testOr = (13 == 4) || (5 != 5);
    printf("The value of testAnd is %d\n", testOr);
}