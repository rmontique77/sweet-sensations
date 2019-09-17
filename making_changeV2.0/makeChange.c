
/* 
 * Making Change: Calculates the change to return to a customer.
 * Author: C0462073
 * Name: Rajeev Montique
 * Created on January 19, 2018, 2:35 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "changeItem.h"
/*
 * 
 */
#define N_Denoms 8

const double intValue[N_Denoms] = {20.0, 10.0, 5.0, 2.0, 1.0, 0.25, 0.10, 0.05};

const char *singleName[N_Denoms] = {"Twenty", "Ten", "Five", "Toonie",
    "Loonie", "Quarter", "Dime", "Nickel"};

const char *pluralName[N_Denoms] = {"Twenties", "Tens", "Fives", "Toonies",
    "Loonies", "Quarters", "Dimes", "Nickels"};



int main(int argc, char** argv) {
    // Declaring variables
    double tender, changedue, cost;

    //Asking for the total cost of the items
    printf("Enter the cost(in dollars) : ");
    scanf("%lf", &cost);

    //Asking for the amount tendered
    printf("Enter the amount received (in dollaers): ");
    scanf("%lf", &tender);

    //Calculating the change for the customer and printing it.
    changedue = tender - cost;
    changedue = round(changedue / 0.05) * 0.05;
    if(changedue < 0){
        printf("Not enough money: %.2lf \n", changedue);
    }else{
        printf("Your change is $%.2lf\n", changedue);
    }
               

    for (int k = 0; k < N_Denoms; k++) {
        changedue = changeItem(changedue, intValue[k], singleName[k], pluralName[k]);
    }



    return (EXIT_SUCCESS);
}

