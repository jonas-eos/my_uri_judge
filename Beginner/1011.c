/*
 * Calculates and show the volume of a sphere being provided the value of its
 * radius (R).
 * The formula to calculate the volume is: (4/3) * PI * (R^3)
 * Set PI value as 3.14159
 * ---------------------------------------------------------------------------*/
#define CALC_VOLUME(x)      (((double)(4.0)/(double)(3.0)) * ((PI)) * ((x)))

/*----------------------------------------------------------------------------*/

#include <stdio.h>
#include <math.h>


/*----------------------------------------------------------------------------*/
const double PI = (double) 3.14159;

/*----------------------------------------------------------------------------*/

int main( ) {

    double volume;
    double radius;

    fscanf( stdin, "%lf", &radius);

    volume = CALC_VOLUME(pow(radius, 3));

    fprintf( stdout, "VOLUME = %.3f\n", volume);

    return 0;

}

