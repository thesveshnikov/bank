#include <stdio.h>
#include "print_menu.h"

void printMenu() {
    const char *arr[] = {"Deposit", "Withdraw", "Check Balance", "Loan", "Exit"};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Available options:\n\n");
    for (int i = 0; i < n; i++) {
        printf("%d. %s\n", i + 1, arr[i]);
    }
}