/*
 * Read three values (var A, B and C) whic3
 * h are three student's grades
 * Calculate the average considering that:
 * Grade A has weight 2
 * Grade B has weight 3
 * Grade C has weight 5
 * Each grade can go from 0 to 10.0
 * Always with one decimal place.
 * ---------------------------------------------------------------------------*/

#define TOTAL_SUM(x,y,z)    (((x) * (GRADE_A_WEIGHT)) + ((y) * (GRADE_B_WEIGHT)) + ((z) * (GRADE_C_WEIGHT)))
#define CALC_AVERAGE(x)   ((x) / ((GRADE_A_WEIGHT) + (GRADE_B_WEIGHT) + (GRADE_C_WEIGHT)))

/*----------------------------------------------------------------------------*/

#include <stdio.h>

enum {
    GRADE_A_WEIGHT = 2,
    GRADE_B_WEIGHT = 3,
    GRADE_C_WEIGHT = 5,
    MIN_GRADE = 0,
    MAX_GRADE = 10
};

int main( ) {

    float studentGradeA;
    float studentGradeB;
    float studentGradeC;

    float average;

    scanf("%f %f %f", &studentGradeA, &studentGradeB, &studentGradeC);

    if ((studentGradeA >= MIN_GRADE) && (studentGradeA <= MAX_GRADE)) {
        if ((studentGradeB >= MIN_GRADE) && (studentGradeB <= MAX_GRADE)) {
            if ((studentGradeC >= MIN_GRADE) && (studentGradeC <= MAX_GRADE)) {

                average = TOTAL_SUM(studentGradeA, studentGradeB, studentGradeC);
                average = CALC_AVERAGE(average);


            } else return 1;
        } else return 1;
    } else return 1;

    fprintf(stdout, "MEDIA = %.1f\n", average);

    return 0;
}