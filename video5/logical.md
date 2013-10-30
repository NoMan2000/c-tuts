#Logic Control

##if Statement

FORM: 

        if ( condition == true ){
            statement;
        }

**INTERPRETATION:**  If a tested condition evaluates to true (a nonzero value), then the statement within the braces is executed.  Otherwise, it skips over the braces and nothing happens.

You can either hand trace the execution or you can use bc to make some quick tests and make sure that your statements are correct.


----

##if with else  

The semantics mean to execute a code block if the tested condition evaluates to true.  If the tested condition evaluates to false, then execute the else statement.

        if ( condition == true ){
            statement ;
        }
        else{
        statement;
        // the else statement executes when the default statement is false.
        }

----

## if with else if

If with else if is used to specify multiple conditions that need to be tested.  The format is:

        if (condition1 == true){
            statement1;
            statement2;
        }else if(condition2 == true){
            statement1;
            statement2;
            
        }else{
            statement1;
            statement2;
        }
        
----

##Switch statements

Switch statements are used to evaluate large amounts of logic without having to use a bunch of else if statements.  There are a few gotchas with switch statements.  The first is that switch statements only work with either individual characters or integers.  As we have seen, a character is really an integer to C.  

        switch(case){
            case 1:
                statement1;
                statement2;
                break;
            case 2:
                statement1;
                statement2;
                break;
            case 3:
                statement1;
                statement2;
            case4:
                statement1;
                statement2;
                statement3;
            break;
            default:
                statement1;
        }
        
The other gotcha deals with the break statement.  The break statement exits out of the statement block.  If a statement does not have a break at the end of it, the code will "fall through", meaning that it will simply continue executing the next line of code.  Some programming languages like C# disallow the use of falling through because they found it produces more errors than it saves time.