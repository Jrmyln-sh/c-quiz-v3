#include <stdio.h>

int main () {
    char ans;
    int score = 0;
    char name[50];
    float average;

    printf("\n\n\t\tWelcome To C-Quiz");
    printf("\n\t\tAraling Panlipunan\n");

    printf("\n\t\tEnter Your name: \t");
    gets(name);

    printf("\n\t\t1. Sino ang kinikilalang pambansang bayani ng Pilipinas?");
    printf("\n\t\tA. Emilio Aguinaldo");
    printf("\n\t\tB. Andres Bonifacio");
    printf("\n\t\tC. Jose Rizal");
    printf("\n\t\tYour Answer: \t");
    scanf(" %c",&ans);

    if (ans == 'A' || ans == 'B' || ans == 'C') {
        if (ans == 'C') {
            printf("\n\t\tYou are correct!\n");
            score++;
        } else {
            printf("\n\t\tCorrect Answer is C\n");
        }
    } else {
        printf("\n\t\tInvalid!\n");
    }

    printf("\n\t\t2. Kailan idineklara ang Kalayaan ng Pilipinas mula sa Espanya?");
    printf("\n\t\tA. Hunyo 12, 1898");
    printf("\n\t\tB. Agosto 30, 1896");
    printf("\n\t\tC. Hulyo 4, 1946");
    printf("\n\t\tYour Answer: \t");
    scanf(" %c",&ans);

    if (ans == 'A' || ans == 'B' || ans == 'C') {
        if (ans == 'A') {
            printf("\n\t\tYou are correct!\n");
            score++;
        } else {
            printf("\n\t\tCorrect Answer is A\n");
        }
    } else {
        printf("\n\t\tInvalid!\n");
    }

    printf("\n\t\t3. Sino ang unang Pangulo ng Pilipinas?");
    printf("\n\t\tA. Manuel L. Quezon");
    printf("\n\t\tB. Emilio Aguinaldo");
    printf("\n\t\tC. Sergio Osmena");
    printf("\n\t\tYour Answer: \t");
    scanf(" %c",&ans);

    if (ans == 'A' || ans == 'B' || ans == 'C') {
        if (ans == 'B') {
            printf("\n\t\tYou are correct!\n");
            score++;
        } else {
            printf("\n\t\tCorrect Answer is B\n");
        }
    } else {
        printf("\n\t\tInvalid!\n");
    }

    printf("\n\t\t4. Anong organisasyon ang itinatag ni Andres Bonifacio upang ipaglaban ang kalayaan?");
    printf("\n\t\tA. La Liga Filipina");
    printf("\n\t\tB. Katipunan (K.K.K.)");
    printf("\n\t\tC. Propaganda Movement");
    printf("\n\t\tYour Answer: \t");
    scanf(" %c",&ans);

    if (ans == 'A' || ans == 'B' || ans == 'C') {
        if (ans == 'B') {
            printf("\n\t\tYou are correct!\n");
            score++;
        } else {
            printf("\n\t\tCorrect Answer is B\n");
        }
    } else {
        printf("\n\t\tInvalid!\n");
    }

    printf("\n\t\t5. Saan pinatapon si Jose Rizal bago siya binaril sa Bagumbayan?");
    printf("\n\t\tA. Cebu");
    printf("\n\t\tB. Dapitan");
    printf("\n\t\tC. Cavite");
    printf("\n\t\tYour Answer: \t");
    scanf(" %c",&ans);

    if (ans == 'A' || ans == 'B' || ans == 'C') {
        if (ans == 'B') {
            printf("\n\t\tYou are correct!\n");
            score++;
        } else {
            printf("\n\t\tCorrect Answer is B\n");
        }
    } else {
        printf("\n\t\tInvalid!\n");
    }

    average = 50.0 + score * 10.0;

    if (score >= 5) {
        printf("\n\t\t%s Your Score is %d", name, score);
        printf("\n\t\tYour average is \t%.2f", average);
        printf("\n\n\t\tExcellent");
        printf("\n\n\t\tQuiz v3");
    } else if (score >= 4) {
        printf("\n\t\t%s Your Score is %d", name, score);
        printf("\n\t\tYour average is \t%.2f", average);
        printf("\n\n\t\tSatisfactory");
        printf("\n\n\t\tQuiz v3");
    } else if (score >= 3) {
        printf("\n\t\t%s Your Score is %d", name, score);
        printf("\n\t\tYour average is \t%.2f", average);
        printf("\n\n\t\tVery Good");
        printf("\n\n\t\tQuiz v3");
    } else if (score >= 2) {
        printf("\n\t\t%s Your Score is %d", name, score);
        printf("\n\t\tYour average is \t%.2f", average);
        printf("\n\n\t\tGood");
        printf("\n\n\t\tQuiz v3");
    } else if (score >= 1) {
        printf("\n\t\t%s Your Score is %d", name, score);
        printf("\n\t\tYour average is \t%.2f", average);
        printf("\n\n\t\tFair");
        printf("\n\n\t\tQuiz v3");
    } else {
        printf("\n\t\t%s Your Score is %d", name, score);
        printf("\n\t\tYour average is \t%.2f", average);
        printf("\n\n\t\tFailed");
        printf("\n\n\t\tQuiz v3");
    }
}
