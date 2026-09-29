#include <stdio.h>
#include <string.h>

#define SIZE 10
#define INIT_VALUE 999

void printNames(char nameptr[][80], int size);
void readNames(char nameptr[][80], int *size);
int findTarget(char *target, char nameptr[][80], int size);

int main() {
    char nameptr[SIZE][80], t[40], *p;
    int size, result = INIT_VALUE;
    int choice;
    printf("Select one of the following options: \n");
    printf("1: readNames()\n");
    printf("2: findTarget()\n");
    printf("3: printNames()\n");
    printf("4: exit()\n");
    do {
        printf("Enter your choice: \n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                readNames(nameptr, &size);
                break;
            case 2:
                printf("Enter target name: \n");
                scanf("\n");
                fgets(t, 80, stdin);
                if (p=strchr(t,'\n')) {
                    *p = '\0';
                }
                result = findTarget(t, nameptr, size);
                printf("findTarget(): %d\n", result);
                break;
            case 3:
                printNames(nameptr, size);
                break;
        }
    } while (choice < 4);
    return 0;
}

void printNames(char nameptr[][80], int size) {
    int i;
    for (i=0; i<size; i++) {
        printf("%s ", nameptr[i]);
    }
    printf("\n");
}

void readNames(char nameptr[][80], int *size) { // size is a pointer to an integer
    printf("Enter size:\n");
    scanf("%d", size); // use size, not &size because size is already a pointer to an integer
    getchar(); // to consume the newline character left by scanf
    
    printf("Enter %d names:\n", *size); // use *size to get the value of size
    for (int i = 0; i < *size; i++) { // use *size to get the value of size
        scanf("%s", nameptr[i]); // read each name into the 2D array, use nameptr because nameptr is already a pointer to the first element of the 2D array
    }
}

int findTarget(char *target, char nameptr[][80], int size) {
    for (int i = 0; i < size; i++) {
        if (strcmp(target, nameptr[i]) == 0) { // strcmp returns 0 if the strings are equal. target and nameptr[i] are both pointers to char which strcmp can compare
            return i; 
        }
    }
    return -1;
}