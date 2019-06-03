/*
 * Reads 3 integer values and present the greatest one followed by the message
 * eh o maior
 * greatest = (value1 + value2 + abs(value2 - value1)) / 2
 * ---------------------------------------------------------------------------*/
#define GREATEST(x,y)       (((x) + (y) + (abs((y) - (x)))) / (int) (2))

#include <stdio.h>
#include <stdlib.h>

/*----------------------------------------------------------------------------*/

int main( ) {

    int a, b, c;
    int greatest;

    fscanf( stdin, "%i\n%i\n%i", &a, &b, &c);

    greatest = GREATEST(a, b);
    greatest = GREATEST(greatest, c);

    fprintf( stdout, "%i eh o maior\n", greatest);

    return EXIT_SUCCESS;

}