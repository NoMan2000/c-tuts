#include <stdio.h>
#include <string.h>

int main (){
    char name[50];
    int length;
    printf("What is your name?\n");
    //scanf("%[^\n]", name);
    /* this is a special format string that means "Read until a newline return has been reached. */ 
    
    /* Another way of doing this is fgets.  Using fgets would look like this:
    fgets(name, 50, stdin);
    This means to reserve 50 arrays, put the contents in the name variable, and to get that input from the standard input, aka your keyboard. */
    
    fgets(name, 50, stdin);
    
    // The downside to using that is that the output will be funky as it will add in a newline return.
    
    name[strlen(name)-1] = '\0';
    
    for(length =0;name[length] != '\0';length++)
    {
        
    }
    printf("The length of your name %s is %d characters long.\n", name, length);
    
}