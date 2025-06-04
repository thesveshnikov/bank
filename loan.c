#include <stdio.h>
#include "loan.h"

void loan() {
    float loanValue;
    printf("What is the value of your loan? ");
    scanf("%f", &loanValue);
    printf("Loan request for $%.2f received.\n", loanValue);
}