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

See the dowhile.c file for an example.  Note that if you change the condition to false, it will still run at least once.  See the falsedowhile.c file.  Note that even though the condition evaluated is if x is greater than 7, and that x is only equal to 0, the program runs at least once.

##Continue

The continue statement will keep the loop running, but execute a special statement when the condition is reached.  See the continue.c file for an example.

##Break

We have already seen the break keyword used in the switch statement.  The break statement exits out of the loop, but does not exit the entire program it is running within.  See the break.c file to see it in action, or review the switch statement from the previous video.

##Exit

The exit keyword will exit out of the entire program.  You must include the <stdlib.h> to use it.  The exit is with an integer value.  Some operating systems use a exit(1) to indicate a system error.  See the exit.c file.

##The 'forever' Loops

Another way of dealing with the problem of user input is to run an infinite for or while loop.  They look like this:

        for(;;){
            statement1;
            conditionCheck;
            if(conditionCheck==true){
                break;
            }
        }

The minimum valid for loop is for(;;).  The minimum valid while loop is:

        while(1){
            statement1;
            conditionCheck;
            if(conditionCheck==true){
            break;
            }
        }

Why use the for loop version instead of the while version?  The while version has to evaluate the condition each time.  The for version never evaluates itself.  Thus the for version is superior for performance reasons.  See the foreverLoops.c file.  
    
