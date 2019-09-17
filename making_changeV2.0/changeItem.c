
/* 
 * File:   calc.c
 * Author: C0462073
 *
 * Created on February 9, 2018, 3:04 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include "changeItem.h"


double changeItem(double change, const double intValue,
        const char *singleName, const char *pluralName) {
    int num;
    num = change / intValue;
    if(num > 1){
        printf("%d %s \n", num, pluralName);
    } else if (num==1){
        printf("%d %s \n", num, singleName);
    }
    change = change - num * intValue; 

    return change;

}

