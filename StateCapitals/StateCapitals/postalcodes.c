#include <stdio.h>
#include <string.h>
#include "pcodes.h"
#include "states.h"


void neCodes(score) {

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
    menu(score);
}

void mwCodes(score) {

    char answer[5];
    int i = 0;

    for (i = 0; i < 12; i++) {
        printf("\nWhat postal code for %s?\n", mwStates[i]);
        scanf("%s", answer);
        if (strcmp(answer, pMW[i]) == 0) {
            printf("Correct!\n");
            score++;
            printf("Current Score: %d\n", score);
        }
        else {
            printf("Incorrect.  The correct answer is %s\n", pMW[i]);
            printf("Current Score: %d\n", score);
        }
    }
    menu(score);
}

void sCodes(score) {

    char answer[5];
    int i = 0;

    for (i = 0; i < 17; i++) {
        printf("\nWhat postal code for %s?\n", southStates[i]);
        scanf("%s", answer);
        if (strcmp(answer, pSouth[i]) == 0) {
            printf("Correct!\n");
            score++;
            printf("Current Score: %d\n", score);
        }
        else {
            printf("Incorrect.  The correct answer is %s\n", pSouth[i]);
            printf("Current Score: %d\n", score);
        }
    }
    menu(score);
}

void wCodes(score) {

    char answer[5];
    int i = 0;

    for (i = 0; i < 13; i++) {
        printf("\nWhat postal code for %s?\n", westernStates[i]);
        scanf("%s", answer);
        if (strcmp(answer, pWest[i]) == 0) {
            printf("Correct!\n");
            score++;
            printf("Current Score: %d\n", score);
        }
        else {
            printf("Incorrect.  The correct answer is %s\n", pWest[i]);
            printf("Current Score: %d\n", score);
        }
    }
    menu(score);
}