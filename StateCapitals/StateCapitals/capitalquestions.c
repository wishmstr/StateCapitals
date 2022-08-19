#include <stdio.h>
#include <string.h>
#include "capitalquestions.h"
#include "capitals.h"
#include "states.h"

void neCap(score) {

    char answer[25];
    int i = 0;

    for (i = 0; i < 9; i++) {
        printf("\nWhat state has the capital of %s?\n", neCapitals[i]);
        scanf(" %20[^\n]s", answer);
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
    menu(score);
}

void mwCap(score) {

    char answer[25];
    int i = 0;

    for (i = 0; i < 12; i++) {
        printf("\nWhat state has the capital of %s?\n", mwCapitals[i]);
        scanf(" %20[^\n]s", answer);
        if (strcmp(answer, mwStates[i]) == 0) {
            printf("Correct!\n");
            score++;
            printf("Current Score: %d\n", score);
        }
        else {
            printf("Incorrect.  The correct answer is %s\n", mwStates[i]);
            printf("Current Score: %d\n", score);
        }
    }
    menu(score);
}

void sCap(score) {

    char answer[25];
    int i = 0;

    for (i = 0; i < 17; i++) {
        printf("\nWhat state has the capital of %s?\n", sCapitals[i]);
        scanf(" %[^\n]", answer);
        if (strcmp(answer, southStates[i]) == 0) {
            printf("Correct!\n");
            score++;
            printf("Current Score: %d\n", score);
        }
        else {
            printf("Incorrect.  The correct answer is %s\n", southStates[i]);
            printf("Current Score: %d\n", score);
        }
    }
    menu(score);
}

void wCap(score) {

    char answer[25];
    int i = 0;

    for (i = 0; i < 13; i++) {
        printf("\nWhat state has the capital of %s?\n", wCapitals[i]);
        scanf(" %[^\n]", answer);
        //gets(answer);
        if (strcmp(answer, westernStates[i]) == 0) {
            printf("Correct!\n");
            score++;
            printf("Current Score: %d\n", score);
        }
        else {
            printf("Incorrect.  The correct answer is %s\n", westernStates[i]);
            printf("Current Score: %d\n", score);
        }
    }
    menu(score);
}