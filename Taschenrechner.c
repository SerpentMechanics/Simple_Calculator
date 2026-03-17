#include <stdio.h>                                      // Standerd input / output.
#include <string.h>
#include <stdlib.h>                                     // Standard functions library.

double firstNumber;                                     // Variables.
double secondNumber;
int language;
int choice;
char menuOneFour[64];
char exitMenu[16];
char addMenu[32];
char subMenu[32];
char multMenu[32];
char divMenu[32];
char chooseOperation[64];
char firstNumberText[64];
char secondNumberText[64];
char errorDivZero[64];

void languageMenu() {                                   // Language selection menu.
    printf("1. DEU\n");
    printf("2. ENG\n");
    scanf("%d", &language);
}

void mainMenu() {                                       // Main menu.
    printf("%s\n", exitMenu);
    printf("%s\n", addMenu);
    printf("%s\n", subMenu);
    printf("%s\n", multMenu);
    printf("%s\n", divMenu);
    printf("%s\n", chooseOperation);
    scanf("%d", &choice);
    }

void getNumbersAddition() {                             // Asking for the first and second nummber in addition and saves the input.
    printf("%s", firstNumberText);
    scanf("%lf", &firstNumber);
    printf("%s", secondNumberText);
    scanf("%lf", &secondNumber);
}

void getNumbersSubtraction() {                          // Asking for the first and second number in subtraction and saves the input.
    printf("%s", firstNumberText);
    scanf("%lf", &firstNumber);
    printf("%s", secondNumberText);
    scanf("%lf", &secondNumber);
}
void getNumbersMultiplication() {                       // Asking for the first and second number in multiplication and saves the input.
    printf("%s", firstNumberText);
    scanf("%lf", &firstNumber);
    printf("%s", secondNumberText);
    scanf("%lf", &secondNumber);
}

void getNumbersDivision() {                             // Asking for the first and second number in division and saves the input.
    printf("%s", firstNumberText);
    scanf("%lf", &firstNumber);
    printf("%s", secondNumberText);
    scanf("%lf", &secondNumber);
}

int main() {                                            // Main Code starts here.

    languageMenu();                                     // Opens the language menu.

    while (language < 1 || language > 2) {              // Fail safe for other inputs rather than one or two.
        printf("Bitte wähle eine Sprache!\n");
        printf("Please choose a language!\n");
        languageMenu();
    }

    if (language == 1) {                                                                    // Language pack German.
        strcpy(menuOneFour, "Bitte wählen Sie nur eine Zahl zwischen 0 und 4.");
        strcpy(exitMenu, "0. Beenden!");
        strcpy(addMenu, "1. Addieren");
        strcpy(subMenu, "2. Subtrahieren");
        strcpy(multMenu, "3. Multiplizieren");
        strcpy(divMenu, "4. Dividieren");
        strcpy(chooseOperation, "Bitte wählen Sie eine Option: ");
        strcpy(firstNumberText, "Bitte trage die erste Zahl ein: ");
        strcpy(secondNumberText, "Nun tragen Sie bitte die zweite Zahl ein: ");
        strcpy(errorDivZero, "Fehler: Das teilen durch Null ist nicht gestattet!");
    }

    if (language == 2) {                                                                    // Language pack English.
        strcpy(menuOneFour, "Please choose a number between 0 and 4 only.");
        strcpy(exitMenu, "0. Exit!");
        strcpy(addMenu, "1. Addition");
        strcpy(subMenu, "2. Subtraction");
        strcpy(multMenu, "3. Multiply");
        strcpy(divMenu, "4. Division");
        strcpy(chooseOperation, "Please choose the operation: ");
        strcpy(firstNumberText, "Please enter the first number: ");
        strcpy(secondNumberText, "Now enter the second number: ");
        strcpy(errorDivZero, "Error: Division by zero isn't allowed!");
    }

    mainMenu();

    while (choice < 0 || choice > 4) {                                                      // Fail safe for the main menu.
        printf("%s\n", menuOneFour);
        mainMenu();
    }

    while (choice != 0) {                                                                                   // As long as the choice isn't zero, the calculator returns to the main menu after the calculation.

        if (choice == 1) {
            getNumbersAddition();
            printf("%lf + %lf = %lf\n", firstNumber, secondNumber, firstNumber + secondNumber);
            mainMenu();
        } else if (choice == 2) {
            getNumbersSubtraction();
            printf("%lf - %lf = %lf\n", firstNumber, secondNumber, firstNumber - secondNumber);
            mainMenu();
        } else if (choice == 3) {
            getNumbersMultiplication();
            printf("%lf * %lf = %lf\n", firstNumber, secondNumber, firstNumber * secondNumber);
            mainMenu();
        } else if (choice == 4) {
            getNumbersDivision();
            if (secondNumber == 0) {
                printf("%s\n", errorDivZero);
                mainMenu();
            } else {
                printf("%lf / %lf = %lf\n", firstNumber, secondNumber, firstNumber / secondNumber);
                mainMenu();
            }  
        }
    }
    return 0;
}