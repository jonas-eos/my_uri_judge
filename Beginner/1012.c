/* 
 * Reads three floating point values: A, B and C
 * Calculate and show:
 * a)   -   Area of the rectangle triangle that has base A and height C
 * b)   -   Area of the radiu's circle C. (PIR = 3.14159)
 * c)   -   Area of the trapezium which has A and B by base and C by height
 * d)   -   Area of the square that has side B
 * e)   -   Area of the rectangle that has sides A and B
 * ---------------------------------------------------------------------------*/
#define TRIANGLE_AREA(a,c)    (((a) * (c)) / (double)(2))
#define CIRCLE_AREA(c)                  ((PI) * ((c) * (c)))
#define TRAPEZIUM_AREA(a,b,c)           ((((a) + (b))/(double)(2)) * (c))
#define SQUARE_AREA(b)                  ((b) * (b))
#define RECTANGLE_AREA(a,b)             ((a) * (b))

/*----------------------------------------------------------------------------*/

#include <stdio.h>

/*----------------------------------------------------------------------------*/
const double PI = (double) 3.14159;

int main( ) {

    double a, b, c;

    fscanf( stdin, "%lf\n%lf\n%lf", &a, &b, &c);

    fprintf( stdout, "TRIANGULO %.3f\n", (double) TRIANGLE_AREA( a, c ));
    fprintf( stdout, "CIRCULO %.3f\n", (double) CIRCLE_AREA( c ));
    fprintf( stdout, "TRAPEZIO %.3f\n", (double) TRAPEZIUM_AREA( a, b, c ));
    fprintf( stdout, "QUADRADO %.3f\n", (double) SQUARE_AREA( b ));
    fprintf( stdout, "RETANGULO %.3f\n", (double) RECTANGLE_AREA( a, b ));

    return 0;

}
