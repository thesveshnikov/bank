#include <stdio.h>
#include "ask_balance.h"
#include "deposit.h"
#include "withdraw.h"
#include "loan.h"
#include "exit_program.h"
#include "print_menu.h"
#include "print_balance.h"
#include "select_option.h"

int main(void) {
    float balance;
    int option;

    askBalance(&balance);

    do {
        printMenu();
        printBalance(&balance);
        selectOption(&option);

        switch (option) {
            case 1:
                deposit(&balance);
                break;
            case 2:
                withdraw(&balance);
                break;
            case 3:
                printBalance(&balance);
                break;
            case 4:
                loan();
                break;
            case 5:
                exitProgram();
                break;
            default:
                printf("Invalid option.\n");
        }

    } while (option != 5);

    return 0;
}
