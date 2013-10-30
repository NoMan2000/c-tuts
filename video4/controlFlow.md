#Control Flow

Control structures control the flow of execution in a program or function.  You can google "Turing Complete" to learn more about this concept and why it is so important.  Instructions are organized into three categories:  Sequence, selection, and repetition.  

Sequence is the flow of statements from top-to-bottom.  By now, you've seen this numerous times.

        void foo(void){
        statement1;
        statement2;
        statement3;
        }

In each statement, the flow goes from top to bottom.  There are two ways to begin executing statements non-sequentially.  The first one is what we did in the last video, using a function to execute a block of code somewhere else in the program.  This function should be well-named (i.e. it should be clear what the function does) and be restricted to what is it intended to do.  

In terms of refactoring, moving code into a function is called "Method extraction" refactoring.  The second technique is called componentization, breaking code down into components that are easy to understand.

The second way to change the sequential flow is the wrong way.  It involves the use of a keyword GOTO and a keyword LABEL that specifies where the code should jump.  The problem is that this method is very vague and prompts lots of jumping around in the code.  The term for this problem is "spaghetti code".

If you are ever thinking of using GOTO and LABEL, follow this simple rule.  **DON'T**

##Relational and Equality Checks

Another way to control the execution of code is to test the relationships between variables, (i.e. is the balanceOfBankAccount > billsToBePaid?) or to test the equality between the two portions.  

Here's a quick list of the [relational operators](https://c9.io/noman2000/c-tutorials/workspace/video4/operators.html)

C does not really understand True or False as such, rather, anything which is greater than 0 is true while 0 is false.  If you ask C explicitly to test for a true value, then true will equal 1 and false will equal 0.  

        int x = 2; int y = 3; int testValue; testValue = (x > y);
        
The output of testValue will be 1.  An important note here is that **any** non-zero value will be interpreted by the C Compiler as true.  This often results in problems.  To get around this, the _Bool can be used.  This was added in the C Standard because many people had written libraries that were meant to be compatible with how C++ understood bool.  To help out, the C standard library now includes the <stdbool.h> file which is a 2 bit data type.  It still does not exactly understand true or false, but it can add clarity to the code.

##Logical Operators

Logical operators test if a set of conditions are true.  In the case of the && operator, both conditions must be true in order for the evaluation to be true.  If either one is false, the entire statement is false.  If both are true, then the statement is true.  C uses "lazy evaluation", which means that it evaluates as little as possible.  For example, in the case of a && statement, if the left-side of the equation is false, the right-side of the equation will never be evaluated.  

##Character Comparison

C treats char as a special integer, corresponding to its ASCII number.  So these can be converted to integers and tested for relations and equality.

        char 'a' < char 'A';
        
Will equal false.  