#include <stdio.h>
#include "withdraw.h"

void withdraw(float *balance) {
    float withdrawValue;
    printf("How much do you want to withdraw? ");
    scanf("%f", &withdrawValue);
    *balance -= withdrawValue;
    printf("New balance: $%.2f\n", *balance);
}