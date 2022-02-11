/**
 * @file Balance_Enquire.c
 * @ranga.prudhviraju
 * @brief 
 * @version 0.1
 * @date 2022-02-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include"atm.h"

float checkBalance(float balance) {
    printf("You Choose to checkout your Balance\n");
    printf("\n\n****Your Available Balance is:   $%.2f\n\n", balance);
    return balance;

}//Check Balance
