#include <stdio.h> 
#include <string.h>
#include <ctype.h>

void processString(char *str, int *totVowels, int *totDigits); 
int main() {
    char str[50], *p;
    int totVowels, totDigits;

    printf("Enter the string: \n"); 
    fgets(str, 50, stdin);
    if (p=strchr(str,'\n')) {
        *p = '\0'; // remove newline character. strchr() returns NULL if '\n' not found. p is pointer to the first occurrence of '\n'.
    } 
    processString(str, &totVowels, &totDigits);
    printf("Total vowels = %d\n", totVowels);
    printf("Total digits = %d\n", totDigits);
    return 0;
}

void processString(char *str, int *totVowels, int *totDigits) {
    *totVowels = 0;
    *totDigits = 0;
    for (int i = 0; i < strlen(str); i++){
        if (isdigit(*(str + i))) {
            (*totDigits)++;
            continue;
        } 
        switch(tolower(*(str+i))) {
            case 'a':
                (*totVowels)++;
                break;
            case 'e':
                (*totVowels)++;
                break;
            case 'i':
                (*totVowels)++;
                break;
            case 'o':
                (*totVowels)++;
                break;
            case 'u':
                (*totVowels)++;
                break;
        }
    }
}
