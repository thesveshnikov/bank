#include <stdio.h>
#include "ask_balance.h"

void askBalance(float *balance) {
    printf("What is your balance? ");
    scanf("%f", balance);
    printf("Welcome to the bank!\n\n");
}