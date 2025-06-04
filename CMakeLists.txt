cmake_minimum_required(VERSION 3.15)
project(bank_program C)

set(CMAKE_C_STANDARD 11)

set(SOURCES
        main.c
        select_option.c
        print_balance.c
        ask_balance.c
        print_menu.c
        deposit.c
        withdraw.c
        loan.c
        exit_program.c
)

add_executable(bank ${SOURCES})
