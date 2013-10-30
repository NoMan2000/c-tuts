# Problem Statement.

A person enters in the distance that they ran in kilometers.  Convert it into miles.  Then, calculate how fast their time was in minutes to run a mile.

- Input:  Kilometers Ran.
- Output: Miles ran.

## Algorithm:

**Part 1:**  Solving the conversion formula.

distanceInMiles = kilometersRan * milesPerKilometer

**Part 2:**  Solving the Miles per Hour.

- Input: Time to run kilometers.  Miles conversion.  
- Output: Miles ran per minute

A problem should already be apparent.  How do you get the user to put in the correct time?  This should be broken down into two parts.  The first part should be time in minutes, the second part should be time in seconds.  So our first stab:

##Refinement

- Input: Time in minutes to run.  Time in seconds to run.  Convert Minutes and Seconds to a common format.
- Output: Miles ran per hour.

Our algorithm needs to convert to a standard scale.  Since seconds is the easiest scale, the minutes should be multiplied by sixty to get the correct formula.  We are initializing values that will be easy to check.  For desk checking purposes, use values that can easily be computed in your head.

        minutesToSeconds = 60
        distanceInMiles = 4
        secondsInHour = 3600
        
        timeRanInMinutes = 36
        timeRanInSeconds = 20
        
        totalTimeInSeconds = timeRanInMinutes * minutesToSeconds + timeRanInSeconds
        secondsPerMile = secondsInHour / totalTimeInSeconds
        
        milesToTotalTimeInSeconds = TotalTimeInSeconds / milesRan
        (int)minutesPerMile = milesToTotalTimeInSeconds / 60
        (int)secondsPerMile = milesToTotalTimeInSeconds % 60
        Output:  You ran one mile every minutesPerMile and secondsPerMile

##Further Refinement

It turns out that much of this code is unnecessary.  I know, I am demonstrating it to show some of the features of the C language. 

        distanceInMiles = 4
        
        timeRanInMinutes = 36
        timeRanInSeconds = 20
        
        minutesPerMile = timeRanInMinutes / distanceInMiles
        secondsPerMile = timeRanInSeconds / distanceInMiles
        
        Output: You ran one mile every minutesPerMile and secondsPerMile