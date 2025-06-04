#include <stdio.h>

int main(void) {
    int counter = 1;
    int balance;
    int option;

    printf("What's is your balance? ");
    scanf("%d", &balance);

    printf("Welcome to the bank!\n\n");

    const char *arr[] = {"Deposit", "Withdraw", "Check Balance", "Loan"};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Available options: \n\n");
    for (int i = 0; i < n; i++) {
        printf("%d. %s\n", counter, arr[i]);
        counter++;
    }
    printf("\nYor balance: $%d\n\n", balance);

    printf("Select an option: ");
    scanf("%d", &option);

    return 0;
}
