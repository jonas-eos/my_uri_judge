/*
 * Read two floating points values of double precision A and B (studante grades)
 * After this, calculate the student's average, considering that grade A has
 * weight 3.5 and B has weight 7.5.
 * Each grade can be from zero to ten
 * Always with one digit after the decimal point.
 * Don't forget to print the end of line after the result
 * Don't forget the space before and after the equal sign
 * 
 * input: 2 floating points values with one digit after the decimal point
 * 
 * output: MEDIA = %.5f
 */
#define TOTAL_SUM(x,y)    (((x) * (GRADE_A_WEIGHT)) + ((y) * GRADE_B_WEIGHT))
#define CALC_AVERAGE(x)   ((x) / ((GRADE_A_WEIGHT) + (GRADE_B_WEIGHT)))

/*----------------------------------------------------------------------------*/

#include <stdio.h>

/*----------------------------------------------------------------------------*/

const float GRADE_A_WEIGHT = 3.5f;
const float GRADE_B_WEIGHT = 7.5f;

enum {
    MAX_GRADE = 10,
    MIN_GRADE = 0
};

/*----------------------------------------------------------------------------*/

int main( ) {

    double studanteGradeA;
    double studanteGradeB;
    float average;

    scanf("%lf %lf", &studanteGradeA, &studanteGradeB);

    if ((studanteGradeA >= MIN_GRADE) && (studanteGradeA <= MAX_GRADE)) {
        if ((studanteGradeB >= MIN_GRADE) && (studanteGradeB <= MAX_GRADE)) {
           
           average = (float) TOTAL_SUM((float) studanteGradeA, (float) studanteGradeB);
           printf("%f\n", average);
           average = (float) CALC_AVERAGE((float) average);

        } else return 1;
    } else return 1;

    fprintf(stdout, "MEDIA = %.5f\n", average);

    return 0;
}