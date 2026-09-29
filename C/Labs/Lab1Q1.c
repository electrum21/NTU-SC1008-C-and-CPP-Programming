#include <stdio.h>

// What this program does: This program reads student IDs and their corresponding marks,
// then assigns and prints the appropriate grade based on the mark.
// The program continues to prompt for student IDs and marks until the user enters -1 as the student ID.
// Grade boundaries:
// 0-44: F
// 45-54: D
// 55-64: C
// 65-74: B
// 75-100: A
// Note: The program assumes valid input for marks (0-100).
// It uses a switch statement with range cases for grade assignment.

int main() {
    
    int studentID;
    studentID = 1;

    while (studentID != -1) {
        int mark;
        mark = 0;
        printf("Enter Student ID:\n");
        scanf("%d", &studentID);
        if (studentID == -1) {
            break;
        }
        printf("Enter Mark:\n");
        scanf("%d", &mark);

        switch (mark) {
            case 0 ... 44:
                printf("Grade = F\n");
                break;
            case 45 ... 54:
                printf("Grade = D\n");
                break;
            case 55 ... 64:
                printf("Grade = C\n");
                break;
            case 65 ... 74:
                printf("Grade = B\n");
                break;
            case 75 ... 100:
                printf("Grade = A\n");
                break;
        }
    }
    


    return 0;

}