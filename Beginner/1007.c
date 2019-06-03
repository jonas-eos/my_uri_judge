/*
 * Read four integer values named A, B, C and D
 * Calculate and print the difference of product A and B by the product 
 * of C and D (A * B - C * D)
* ----------------------------------------------------------------------------*/

#define PRODUCT(x,y)    ((x) * (y))
#define DIFFERENCE(x,y)     ((x) - (y))

/*----------------------------------------------------------------------------*/

#include <stdio.h>

/*----------------------------------------------------------------------------*/

int main( ) {

    int A, B, C, D;
    int productA, productB;
    int difference;

    fscanf(stdin, "%i %i %i %i", &A, &B, &C, &D);

    productA = PRODUCT( A, B );
    productB = PRODUCT( C, D );

    difference = DIFFERENCE( productA, productB);

    fprintf(stdout, "DIFERENCA = %i\n", difference);

    return 0;

}

