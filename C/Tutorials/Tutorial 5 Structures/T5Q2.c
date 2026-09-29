#include <stdio.h>
#include <string.h>

struct student{
    char name[20]; /* student name */
    double testScore; /* test score */
    double examScore; /* exam score */
    double total; /* total = (testScore+examScore)/2 */
};

double average();

int main() {
    printf("average(): %.2f\n", average());
    return 0;
}

double average() {
    char name[20] = "INITIAL";
    int studentNumber = 0;
    double totalScore = 0.0;
    int testCount = 0;
    struct student Students[50]; // 
    while (strcmp(name, "END") != 0) {
        double studentScore = 0.0;
        printf("Enter student name:\n");
        fgets(Students[studentNumber].name, 20, stdin);
        Students[studentNumber].name[strcspn(Students[studentNumber].name, "\n")] = 0; // This function searches for the first occurrence of the 
        // newline character (\n) within the name string of a specific student. It returns the index (position) of that newline character.
        // It uses the index found by strcspn to replace the newline character with a null terminator (0 or '\0'). 
        if (strcmp(Students[studentNumber].name, "END") == 0) {
            if (studentNumber == 0) {
                return 0;
            }
            break;
        }
        printf("Enter test score:\n");
        scanf("%lf", &Students[studentNumber].testScore);
        studentScore += Students[studentNumber].testScore; 
        testCount++;
        printf("Enter exam score:\n");
        scanf("%lf", &Students[studentNumber].examScore);
        studentScore += Students[studentNumber].examScore;
        testCount++;
        totalScore += studentScore;
        while (getchar() != '\n');
        printf("Student %s total = %.2lf\n", Students[studentNumber].name, studentScore / 2);
        studentNumber++;
    }
    return (totalScore/testCount);
}