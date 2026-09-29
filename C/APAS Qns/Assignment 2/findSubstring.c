#include <stdio.h>
#include <string.h>
#define INIT_VALUE 999

int findSubstring(char *str, char *substr);

int main() {
    char str[40], substr[40], *p;
    int result = INIT_VALUE;
    printf("Enter the string: \n");
    fgets(str, 80, stdin);
    if (p=strchr(str,'\n')) *p = '\0';
    printf("Enter the substring: \n");
    fgets(substr, 80, stdin);
    if (p=strchr(substr,'\n')) *p = '\0';
    result = findSubstring(str, substr);
    if (result == 1)
        printf("findSubstring(): Is a substring\n");
    else if ( result == 0)
        printf("findSubstring(): Not a substring\n");
    else
        printf("findSubstring(): An error\n");
    return 0;
}

int findSubstring(char *str, char *substr) {
    int strIndex = 0;

    // Handle empty substring case
    if (substr[0] == '\0') {
        return 1;
    }

    while (str[strIndex] != '\0') {
        int substrIndex = 0;
        // If the first character matches, check the rest
        while (str[strIndex + substrIndex] == substr[substrIndex] && substr[substrIndex] != '\0') {
            substrIndex++;
        }
        // If we reached the end of substr, we found a match!
        if (substr[substrIndex] == '\0') {
            return 1;
        }
        strIndex++; // Move to the next character in str and try again
    }   

    return 0; // No match found after checking the whole string
}