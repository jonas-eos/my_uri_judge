/* 
 * Reads an employee's number, his/her worked hours number in month and the 
 * amount he received per hour.
 * Print the employee's number and salary that he/she will receive at end of 
 * the month with two decimal places
 * ---------------------------------------------------------------------------*/
 #define SALARY_CALCULATOR(x,y)     ((x) * (y))

 #include <stdio.h>

/*----------------------------------------------------------------------------*/

typedef struct person {
    
    int id;
    int workedHourInMonth;
    double amountReceivedPerHour;
    double salary;

} person;

int main( ) {

    person employee;

    fscanf( stdin, "%i %i %lf", &employee.id, &employee.workedHourInMonth, 
        &employee.amountReceivedPerHour);

    employee.salary = (double) SALARY_CALCULATOR( (double) employee.workedHourInMonth, 
        (double) employee.amountReceivedPerHour);

    fprintf( stdout, "NUMBER = %i\n", employee.id );
    fprintf( stdout, "SALARY = U$ %.2f\n", employee.salary);

    return 0;

}