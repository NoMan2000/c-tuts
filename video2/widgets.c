#include <stdio.h>  // In every C Program.  Ever.
#include <string.h> // Not needed in this case.

int main(){
    
    float CostPerWidget = 15.50;
    int widgetsPurchased;
    float totalCost;
    char stuff[88];
    
    printf("Welcome to the widget buying program!\n");
    printf("How many widgets would you like to buy?  Each widget is $15.50\n");
    scanf("%d", &widgetsPurchased); //Input
    printf("What one word describes our awesome program?\n");
    scanf("%s", stuff); //Input
    printf("You said our service was %s!\n", stuff); //output
    printf("You want %d widgets using our %s service!\n", widgetsPurchased, stuff); //output
    // %d is integers or whole numbers.  %lf is floating point.  %c would be characters.
    totalCost = widgetsPurchased * CostPerWidget; //computation
    printf("Your total will be $%.2f\n", totalCost); //output
    
    
    return 0;
}