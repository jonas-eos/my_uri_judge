/*
 * Two cars(X and Y) leave in the same direction.
 * The car X leaves with a constant speed of 60 km/h and the car Y leaves with
 * a constant speed of 90 km/h
 * In one hour (60 minutes) the car Y can get a distance of 30 kilometers from
 * the X car, in other words, it can get away one kilometer for each 2 minutes.
 * Read the distance (in km) and calculate how long it takes(in minutes) for
 * the car Y to take this ditance in relation to the other car.
 * Input: 1 integer value
 * Output: Print the necessar time followed by the message "minutes"
 * Ex.
 * input 30     60 minutes\n
 * input 110    220 minutes\n
 * input 7      14 minutes\n
 */

#define CALC_TIME(x)    ((x) * (2))
#include <stdio.h>


int main() { 
    int distance;
    scanf("%i", &distance);
    printf("%i minutos\n", CALC_TIME(distance));
    return 0; }