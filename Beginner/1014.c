/*
 * Calculate a car's average consumption being provided the total distance 
 * traveled (in Km) and the spent fuel total (in liters).
 * Input file contais two values:
 * X representing the total distance (in Km) as integer
 * Y representing the spent fuel total with a digit after the decimal point
 * Present a value that represents the average consumption of a car with 3 
 * digits after the decimal point, followed by the message "km/l".
 */

#define CALC_CONSUMPTION(x,y)   ((x) / (y))

#include <stdio.h>

typedef struct {
    int totalDistance;
    double spentFuelTotal;
    double averageConsumption;
} car;

void setData(car* prototype);
void setAverageConsumption(car* prototype);

int main() {
    car newCar;

    setData(&newCar);
    setAverageConsumption(&newCar);

    printf("%.3f km/l\n", newCar.averageConsumption);
    return 0;
}

void
setData(car* prototype) {
    scanf("%i %lf", &prototype->totalDistance, &prototype->spentFuelTotal);
}

void
setAverageConsumption(car* prototype) {
    prototype->averageConsumption = (double) CALC_CONSUMPTION(
        prototype->totalDistance, prototype->spentFuelTotal);
}