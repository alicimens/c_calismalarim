#include <stdio.h>
#define EXAMS 4
#define STUDENTS 3

int calculatelowest(int test[STUDENTS][EXAMS]);
int calculatehighest(int test[STUDENTS][EXAMS]);
double calculateaverage(int test[STUDENTS][EXAMS]);

int main(void) {
    int StudentsGrades[STUDENTS][EXAMS] = {
        {10, 10, 10, 15},
        {93, 54, 67, 88},
        {74, 76, 78, 80}
    };

    printf("                    [0]  [1]  [2]  [3]");
    int i;
    for (i = 0; i < STUDENTS; i++) {
        printf("\nstudent grades [%d]  ", i);
        int k;
        for (k = 0; k < EXAMS; k++) {
            printf("%d   ", StudentsGrades[i][k]);
        }
        puts("");
    }

    printf("  en dusuk not %d", calculatelowest(StudentsGrades));
    printf("\nen yuksek not %d", calculatehighest(StudentsGrades));
    printf("\nortalama %.2f", calculateaverage(StudentsGrades));
}

int calculatelowest(int test[STUDENTS][EXAMS]) {
    int lowest = 100;
    int i, k;
    for (i = 0; i < STUDENTS; i++) {
        for (k = 0; k < EXAMS; k++) {
            if (test[i][k] < lowest) {
                lowest = test[i][k];
            }
        }
    }
    return lowest;
}

int calculatehighest(int test[STUDENTS][EXAMS]) {
    int highest = 0;
    int i, k;
    for (i = 0; i < STUDENTS; i++) {
        for (k = 0; k < EXAMS; k++) {
            if (test[i][k] > highest) {
                highest = test[i][k];
            }
        }
    }
    return highest;
}

double calculateaverage(int test[STUDENTS][EXAMS]) {
    double average = 0;
    int i, k;
    for (i = 0; i < STUDENTS; i++) {
        for (k = 0; k < EXAMS; k++) {
            average += test[i][k];
        }
    }
    return average / (STUDENTS * EXAMS);
}
































