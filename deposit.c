#include <stdio.h>
#include "deposit.h"

void deposit(float *balance) {
    float depositValue;
    printf("How much do you want to deposit? ");
    scanf("%f", &depositValue);
    *balance += depositValue;
    printf("New balance: $%.2f\n", *balance);
}