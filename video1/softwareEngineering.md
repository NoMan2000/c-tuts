#Software Development Method

1. Specify the problem requirements.
2. Analyze the problem.
3. Design the algorithm to solve the problem.
4. Write the Code.
5. Test and verify the completed program.
6. Maintain and update the program.

##Example Problem Statement:

>“Given a list of items stored in a file, sort them in alphabetical order, and write them to another file.”

The problem with coming up with a solution:

The problem statement is very ambiguous.  To back it up a bit, we have no constraints.  What language must this be written in?  That is a design constraint.  A design constraint is the technical limitations of how a program can be run.  A program requirement is the definition of what the program should do.  There are two parts to that.  Functional requirements specify how something should be done, while nonfunctional requirements state the manner it should be achived in.

A clear problem requirements states the problem without ambiguity.   In the example problem statement, the input types we will be handling are ambiguous.  Does the file contain arrays, objects, strings, characters, integers, etc.?  The number and types of data will change the way the algorithm has to be written.  The second part, "Sort them in alphabetical order" is also ambiguous.  Ascending or descending order?  What about special characters?  

Analyze the problem:

* What inputs are needed?
* What outputs are needed?
* What computations must be performed?
* What additional constraints or requirements are needed?  (Nonfunctional Requirements to use the technical term.)  Such as, "How should the output be displayed to the user?"

---

##Example Problem Statement:  
Given the amount of widgets purchased by a person, calculate the total cost of the widgets.

###Inputs:

Number of widgets purchased.
Cost per widget.

###Outputs: 

Total cost of widgets.

###Computation, formula, or algorithm:

totalCost = costPerWidget * widgetsPurchased

##Notice

Before jumping in and immediately start writing code, it's best to begin by verifying that the algorithm works as intended.  I will demo this using a Unix program (and programming language) called BC.  This program is very simple, but very powerful.  The term for this is "desk checking", although one of the biggest developments in software design has been Test-Driven Development (TDD) that emphasizes writing tests before even starting to write the code.

##Algorithm Design.

One of the major concepts of programming, or general problem-solving, is top-down design.  This means breaking down a task into smaller sub-problems, until it is manageable.  With a simple problem like the one we have above, breaking it down into smaller portions isn't a problem.  We have only a few things we need to do:

1.  Get the number of widgets they want to purchase from the user.
2.  Compute the cost per widget by the total number of widgets the user wants.
3.  Display the results back to the user.

##Write the Code

At this stage, you actually have to write the code, converting the algorithm into a workable solution.

##Testing

At this stage, you need to test for error cases (validation).  Users will frequently enter in the wrong information or type of data.  How should your program handle these problems?  Does your program work for all numeric types like numbers with decimals (floats), integers, or negative numbers?  How does it handle a value of zero? 

##Updating Code

Several software practices involve writing maintainable and well-organized code.  One of the principles of the Zen of Python is that code is written once, but read a hundred times.  Following standard methods, best practices, and making it a habit to write clean code will help your code be maintainable and easier to debug if things should go awry.