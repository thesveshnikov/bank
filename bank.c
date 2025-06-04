#include <stdio.h>

int main(void) {
    int counter = 1;
    float balance;
    int option;
    float depositValue;
    float withdrawValue;
    float loanValue;

    printf("What is your balance? ");
    scanf("%f", &balance);

    printf("Welcome to the bank!\n\n");

    const char *arr[] = {"Deposit", "Withdraw", "Check Balance", "Loan", "Exit"};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Available options: \n\n");
    for (int i = 0; i < n; i++) {
        printf("%d. %s\n", counter, arr[i]);
        counter++;
    }
    printf("\nYour balance: $%.2f\n\n", balance);

    printf("Select an option: ");
    scanf("%d", &option);

    switch (option) {
        case 1:
            printf("How much do you want to deposit? ");
            scanf("%f", &depositValue);
            balance += depositValue;
            printf("New balance: $%.2f\n", balance);
            break;
        case 2:
            printf("How much do you want to withdraw? ");
            scanf("%f", &withdrawValue);
            balance -= withdrawValue;
            printf("New balance: $%.2f\n", balance);
            break;
        case 3:
            printf("Your balance is $%.2f.\n", balance);
            break;
        case 4:
            printf("What is the value of your loan? ");
            scanf("%f", &loanValue);
            printf("Loan request for $%.2f received.\n", loanValue);
            break;
        case 5:
            printf("Thank you for using the bank!\n");
            break;
        default:
            printf("Invalid option.\n");
    }

    return 0;
}
