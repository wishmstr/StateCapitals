#include <stdio.h>
#include <string.h>
#include "states.h"
#include "pcodes.h"
#include "capitals.h"
#include <Windows.h>

int score = 0;

int menu(score) {

    int selection = 0;

    printf("\nWould you like to study capitals or states or postal codes?\n1: Capitals\n2: States\n3: Postal Codes\n4: Exit\n>");
    scanf("%d", &selection);
    if (selection == 1) {
        printf("\nWhich region would you like to study on?\n1: North East\n2: Midwest\n3: South\n4: Western\n>");
        scanf("%d", &selection);
        if (selection == 1) {
            neRegion(score);
        }
        else if (selection == 2) {
            mwRegion(score);
        }
        else if (selection == 3) {
            southern(score);
        }
        else if (selection == 4) {
            western(score);
        }
    }
    else if (selection == 2) {
        printf("\nWhich region would you like to study on?\n1: North East\n2: Midwest\n3: South\n4: Western\n>");
        scanf("%d", &selection);
        if (selection == 1) {
            neCap(score);
        }
        else if (selection == 2) {
            mwCap(score);
        }
        else if (selection == 3) {
            sCap(score);
        }
        else if (selection == 4) {
            wCap(score);
        }
    }
    else if (selection == 3) {
        printf("\nWhich region would you like to study on?\n1: North East\n2: Midwest\n3: South\n4: Western\n>");
        scanf("%d", &selection);
        if (selection == 1) {
            neCodes(score);
        }
        else if (selection == 2) {
            mwCodes(score);
        }
        else if (selection == 3) {
            sCodes(score);
        }
        else if (selection == 4) {
            wCodes(score);
        }
    }
    else if (selection == 4) {
        printf("\n\n\nThank you for playing.  Your final score was: %d\n\n\n", score);
        return 0;
    }

    
}

/*void stateRegion() {

    char answer[25];
    int i = 0;

    for (i = 0; i < 9; i++) {
        printf("\nWhat is the capital of %s?\n", neStates[i]);
        scanf("%s", answer);
        if (strcmp(answer, neCapitals[i]) == 0) {
            printf("Correct!\n");
            score++;
            printf("Current Score: %d\n", score);
        }
        else {
            printf("Incorrect.  The correct answer is %s\n", neCapitals[i]);
            printf("Current Score: %d\n\n", score);
        }
    }
    menu();
}

void stateCap() {

    char answer[25];
    int i = 0;

    for (i = 0; i < 9; i++) {
        printf("\nWhat state has the capital of %s?\n", neCapitals[i]);
        scanf(" %[^\n]s", answer);
        if (strcmp(answer, neStates[i]) == 0) {
            printf("Correct!\n");
            score++;
            printf("Current Score: %d\n", score);
        }
        else {
            printf("Incorrect.  The correct answer is %s\n", neStates[i]);
            printf("Current Score: %d\n", score);
        }
    }
    menu();
}

void postalCodes() {

    char answer[5];
    int i = 0;

    for (i = 0; i < 9; i++) {
        printf("\nWhat postal code for %s?\n", neStates[i]);
        scanf("%s", answer);
        if (strcmp(answer, pNE[i]) == 0) {
            printf("Correct!\n");
            score++;
            printf("Current Score: %d\n", score);
        }
        else {
            printf("Incorrect.  The correct answer is %s\n", pNE[i]);
            printf("Current Score: %d\n", score);
        }
    }
    menu();
}
*/
int main(void) {
    /*
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED |
        FOREGROUND_GREEN |
        FOREGROUND_INTENSITY |
        BACKGROUND_BLUE |
        BACKGROUND_INTENSITY
    );
    */
    menu(score);

 

    return 0;
}
