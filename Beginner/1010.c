/*
 * Read a code of a product 1, the number of units of product 1, the price
 * for one unit of product 1, the code of product 2, the number of units of 
 * product 2, nad the price for one unit of product 2
 * After this, calculate and show the amount to be paid.
 * ---------------------------------------------------------------------------*/
#define CALC_PRODUCT_PRICE(x,y)     ((x) * (y))

#include <stdio.h>

/*----------------------------------------------------------------------------*/

/* Read as Product registration */
typedef struct prodReg {

    int id;
    int amount;
    double unitPrice;

} prodReg;

enum {
    FIRST_INDEX = 0,
    MAX_PRODUCT = 2
};


/*----------------------------------------------------------------------------*/

void setProductInformation(prodReg *product );
double calcTotalToPay(prodReg* product);

int main( ) {

    prodReg product[MAX_PRODUCT];
    double totalValueToPay = 0;

    /* Read all product information for the sale */    
    setProductInformation(product);

    totalValueToPay = calcTotalToPay(product);

    fprintf( stdout, "VALOR A PAGAR: R$ %.2f\n", totalValueToPay);

    return 0;

}

/*----------------------------------------------------------------------------*/

void
setProductInformation( prodReg *product ) {

    int idBuffer;
    int amountBuffer;
    double unitPriceBuffer;

    for(int index = FIRST_INDEX; index < MAX_PRODUCT; index++) {

        if (fscanf(stdin, "%i\n%i\n%lf", &idBuffer, &amountBuffer, &unitPriceBuffer) == 3) {

            index[product].id = idBuffer;
            index[product].amount = amountBuffer;
            index[product].unitPrice = unitPriceBuffer;

        }
    }
}

/*----------------------------------------------------------------------------*/

double
calcTotalToPay(prodReg* product) {

    double result = 0;

    for(int index = FIRST_INDEX; index < MAX_PRODUCT; index++) {

        result += CALC_PRODUCT_PRICE(product[index].amount, product[index].unitPrice);

    }

    return result;
}