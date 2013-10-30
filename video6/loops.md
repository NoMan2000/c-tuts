#Loops

Loops evaluate a condition, and while that condition is true, they execute the code contained in a set of braces.  Care must be taken not to accidentally create an infinite loop, which is a loop that executes forever because there is no condition that is false.  C has two general format loops, the for loop and the while loop.  There is one special case loop, the do-while loop.  The one special case of the do-while loop is that it will always execute at least once, so when checking data input, a lot of programmers use it to see if a user does the correct input type.

##While Loop

The while loop is almost identical to the if statement.  The general form looks like this:

        while(condition == true){
        statement1; //statement will execute as long as the condition is true, so something needs to change within the while loop to make the statement false.
        condition = false; // This will exit the loop.
        }
        
A general example of the while loop is in the while.c code.  Something else to be careful of is that the while loop must be initialized with a true condition outside the loop and it must also have a statement that will turn it false within the loop.

##For Loop

The for loop contains everything inside of itself.  It begins with an initializer, which is then terminated with a semi-colon.  Then it states the condition that needs to be evaluated, terminated with a semi-colon.  Finally, it lists what needs to be done at the end of the for loop that will make the condition eventually evaluate to false.  Note that this does **not** need a semi-colon.  It is still possible to create infinite loops while using the for loop.

        for(initializer;condition == true;condition = false){
            statement1;
            statement2;
        }
        
See the for.c file for a brief look at the for loop.

##Do-While Loops

Do while loops are syntatically tricky.  They always evaluate the expression at least once because the expression evaluations occur after the loop is run.  The do-while loop is also terminated with a semi-colon, something not seen in the other loops.  General form:

        do{
            statement1;
        }while(condition == true);
        
