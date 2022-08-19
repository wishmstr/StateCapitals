#include <stdio.h>
#include <string.h>
#include "statequestions.h"
#include "capitals.h"
#include "states.h"

void neRegion(score) {

    char answer[25];
    char buffer[25];
    int i = 0;

    gets(buffer);

    for (i = 0; i < 9; i++) {
        printf("\nWhat is the capital of %s?\n", neStates[i]);
        scanf(" %[^\n]", answer);
        //gets(answer);
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
    menu(score);
}

void mwRegion(score) {

    char answer[25];
    char buffer[25];
    int i = 0;

    gets(buffer);

    for (i = 0; i < 12; i++) {
        printf("\nWhat is the capital of %s?\n", mwStates[i]);
        //scanf("%s", answer);
        gets(answer);
        if (strcmp(answer, mwCapitals[i]) == 0) {
            printf("Correct!\n");
            score++;
            printf("Current Score: %d\n", score);
        }
        else {
            printf("Incorrect.  The correct answer is %s\n", mwCapitals[i]);
            printf("Current Score: %d\n\n", score);
        }
    }
    menu(score);
}

void southern(score) {

    char answer[25];
    char buffer[25];
    int i = 0;

    gets(buffer);

    for (i = 0; i < 17; i++) {
        printf("\nWhat is the capital of %s?\n", southStates[i]);
        //scanf("%s", answer);
        gets(answer);
        if (strcmp(answer, sCapitals[i]) == 0) {
            printf("Correct!\n");
            score++;
            printf("Current Score: %d\n", score);
        }
        else {
            printf("Incorrect.  The correct answer is %s\n", sCapitals[i]);
            printf("Current Score: %d\n\n", score);
        }
    }
    menu(score);
}

void western(score) {

    char answer[25];
    char buffer[25];
    int i = 0;

    gets(buffer);

    for (i = 0; i < 13; i++) {
        printf("\nWhat is the capital of %s?\n", westernStates[i]);
        //scanf(" %[^ \n]", answer);
        gets(answer);
        if (strcmp(answer, wCapitals[i]) == 0) {
            printf("Correct!\n");
            score++;
            printf("Current Score: %d\n", score);
        }
        else {
            printf("Incorrect.  The correct answer is %s\n", wCapitals[i]);
            printf("Current Score: %d\n\n", score);
        }
    }
    menu(score);
}