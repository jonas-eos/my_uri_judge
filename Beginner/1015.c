/*
 * Read the four values corresponding to the x and y axes of two points in the
 * plane, p1(x1,y1) and p2(x2,y2) and calculate the distance between them,
 * showing four decimal places after the comman, according to the formula:
 * Distance = sqrt(((x2 - x1) ^2) + ((y2 - y1) ^2))
 * Input: contains two lines of data. The first one contains two double values:
 * x1 y1 and the second one also contains two double values with one digit after
 * the decimal point: x2, y2
 * Output: Calculate and print the distance value using the provided formula,
 * with 4 digits after the decimal point.
 */
#define CALC_POINT(x,y)     (pow(((x) - (y)), 2))
#define CALC_DIFERENCE(x,y) (sqrt((x) + (y)))

#include <stdio.h>
#include <math.h>

typedef struct {
    double x;
    double y;
} plane;

void setData(plane* plane);
void setDistance(plane* plane1, plane* plane2, double* output);

int main(){
    plane point1;
    plane point2;
    double distance;
    setData(&point1);
    setData(&point2);
    setDistance(&point1, &point2, &distance);
    printf("%.4f\n",distance);
    return 0;
}

void
setData(plane* plane) {
    scanf("%lf\n%lf", &plane->x, &plane->y);
}

void
setDistance(plane* plane1, plane* plane2, double* output) {
    double pointX = (double) CALC_POINT(plane2->x, plane1->x);
    double pointY = (double) CALC_POINT(plane2->y, plane1->y);
    *output = CALC_DIFERENCE(pointX, pointY);
}