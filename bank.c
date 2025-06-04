#include <stdio.h>

int main(void) {
    int counter = 1;
    int balance;
    int option;

    printf("What's is your balance? ");
    scanf("%d", &balance);

    printf("Welcome to the bank!\n\n");

    const char *arr[] = {"Deposit", "Withdraw", "Check Balance", "Loan", "Exit"};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Available options: \n\n");
    for (int i = 0; i < n; i++) {
        printf("%d. %s\n", counter, arr[i]);
        counter++;
    }
    printf("\nYor balance: $%d\n\n", balance);

    printf("Select an option: ");
    scanf("%d", &option);

    switch (option) {
        case 1:
            printf("How much do you want deposit?");
            break;
        case 2:
            printf("How much do you want to withdraw?\n");
            break;
        case 3:
            printf("Your balance is %d.\n", balance);
            break;
        case 4:
            printf("What is the value of your loan?\n");
            break;
        case 5:
            printf("Thank you for using the bank!\n");
            break;
        default:
            printf("Invalid option.\n");
    }

    return 0;
}
