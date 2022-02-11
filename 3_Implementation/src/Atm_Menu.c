/**
 * @file atm_Menu.c
 * @brief 
 * @version 0.1
 * @date 2022-02-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */
// required header files
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include"atm.h"

// funtions for retrieve the logic
int mainMenu() {

    printf("******************Hello!*******************\n");
    printf("**********Welcome to ATM***********\n\n");
    printf("****Please choose one options below****\n\n");
    printf("< 1 >  Check Balance\n");
    printf("< 2 >  Deposit\n");
    printf("< 3 >  Withdraw\n");
    printf("< 4 >  Exit\n\n");
    return 6;

}//Main Menu
