/* Converts distances from kilometers to miles.    */

#include <stdio.h>    /* printf, scanf definitions */
#include "kmsheader.h" /* Includes a function call for later use */
#define MILES_PER_KMS 0.621371192 /* conversion constant  */

/* Typically you use all uppercase for a Constant.  It is not necessary strictly speaking. */

int main(void)
{
      printf("Enter the amount of kilometers you ran.\n");

      /* Get the distance in kilometers. */
      scanf("%lf", &kms);
      /* Convert the distance to miles. */
      miles = MILES_PER_KMS * kms;

      /* Display the distance in miles. */
      printf("That equals %.2f miles.\n", miles);
      
      calculateHours(miles);
      /* Calls the function that performs the conversion */

      return (0);
}


void calculateHours (double milesRan){
    
    int minutesToSeconds = 60;
    double distanceInMiles = milesRan;
    int secondsInHour = 3600;

    printf("Input your minutes first when prompted, then any seconds left over.\n");

    printf("How many minutes did your run take?\n");
    scanf("%d", &timeRanInMinutes);
    
    printf("How many seconds did your run take?\n");
    scanf("%d", &timeRanInSeconds);

    minutesPerMile = timeRanInMinutes / distanceInMiles;
    secondsPerMile = timeRanInSeconds / distanceInMiles;
    printf("You ran one mile every %d minutes and %d seconds.\n", minutesPerMile, secondsPerMile);
    
    
}
