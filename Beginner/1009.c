/*
 * Reads a seller's name, his/her fixed salary and the sale's total made by 
 * himself/herself in the month (in money)
 * Considering that this seller receives 15% over all products sold, write the
 * final salary (total) of this seller at the end of the month, with 
 * two decimal palces
 * ---------------------------------------------------------------------------*/
#define CALC_TOTAL_SALARY(x,y)     ((y) + ((x) * (BONUS_PERCENT)))
#include <stdio.h>

/*----------------------------------------------------------------------------*/
enum constantNumbers {
    MAX_CHARACTER = 20,
    PERCENT = 100
};

const double BONUS_PERCENT = 15.0 / PERCENT;

typedef struct person {

    char name[MAX_CHARACTER];
    double fixedSalary;
    double totalMoneySaleInMonth;
    double finalSalary;

} person;

int main( ) {

    person seller;

    fscanf( stdin, "%19s %lf %lf", seller.name, &seller.fixedSalary, 
        &seller.totalMoneySaleInMonth);

    seller.finalSalary = CALC_TOTAL_SALARY(seller.totalMoneySaleInMonth, 
        seller.fixedSalary);

    fprintf( stdout, "TOTAL = R$ %.2f\n", seller.finalSalary);

    return 0;

}