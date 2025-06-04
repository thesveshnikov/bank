#include <stdio.h>

void selectOption(int *option) {
    printf("Select an option: ");
    scanf("%d", option);
}

void printBalance(float *balance) {
    printf("\nYour balance: $%.2f\n\n", *balance);
}

void askBalance(float *balance) {
    printf("What is your balance? ");
    scanf("%f", balance);

    printf("Welcome to the bank!\n\n");
}

void printMenu() {
    const char *arr[] = {"Deposit", "Withdraw", "Check Balance", "Loan", "Exit"};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Available options:\n\n");
    for (int i = 0; i < n; i++) {
        printf("%d. %s\n", i + 1, arr[i]);
    }
}

int main(void) {
    float balance;
    int option;
    float depositValue;
    float withdrawValue;
    float loanValue;

    askBalance(&balance);

    do {
        printMenu();

        printBalance(&balance);

        selectOption(&option);

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
                printBalance(&balance);
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

    } while (option != 5);

    return 0;
}
