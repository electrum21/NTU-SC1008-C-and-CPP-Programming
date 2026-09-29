#include <stdio.h>
#include <string.h>

char *sweepSpace1(char *str);
char *sweepSpace2(char *str);

int main() {

    char str[80];
    char str2[80];
    char *p;

    printf("Enter the string: \n");
    fgets(str, 80, stdin);

    if (p == strchr(str,'\n')) { // strchr locates the first occurrence of '\n'
        // If you type Hello, it will be H e l l o \n \0
        *p = '\0'; // This line will make it H e l l o \0 \0, replacing the newline character with a null terminator 
    }

    strcpy(str2,str); // This copies the contents of str to str2

    printf("sweepSpace1(): %s\n", sweepSpace1(str));
    printf("sweepSpace2(): %s\n", sweepSpace2(str2));

    return 0;
}

char *sweepSpace1(char *str) { // str is a pointer to the first character of the string, *str will be the first character, *(str + i) is the same as str[i]
    int i = 0; // index to read the original string
    int j = 0; // index to write to the new position in the string
    while (str[i] != '\0') { // loop until the end of the string
        if (str[i] == ' '){ // if the current character is a space
            i++; // skip the space
            continue; // go to the next iteration of the loop
        } else { // if the current character is not a space
            str[j] = str[i]; // copy the character to the new position
            i++; // move to the next character in the original string
            j++; // move to the next position in the new string
        }
    }
    str[j] = '\0'; // terminate the new string, reason for using index j is because j tracks the position in the new string
    return str; // still need to return the modified string, because the function signature requires it
}

char *sweepSpace2(char *str) {
    int i = 0; 
    int j = 0; 
    while (*(str + i) != '\0') { 
        if (*(str + i) == ' '){ 
            i++; 
            continue; 
        } else { 
            *(str + j) = *(str + i); // copy the character to the new position
            i++; // move to the next character in the original string
            j++; // move to the next position in the new string
        }
    }
    *(str + j) = '\0'; // terminate the new string, reason for using index j is because j tracks the position in the new string
    return str; // still need to return the modified string, because the function signature requires it
}