#include <stdio.h>
#include <string.h>
#define M1 "How are ya, sweetie?" 

char M2[40] = "Beat the clock."; 
char *M3 = "chat";

int main() {
    char words[80], *p; 
    printf(M1); // print the string literal M1
    puts(M1); // print the string literal M1 followed by a newline
    puts(M2); // print the string array M2 followed by a newline
    puts(M2+1); // print the string array M2 starting from index 1 followed by a newline
    fgets(words, 80, stdin);	/* user inputs : win a toy. */ 
    if (p=strchr(words,'\n')) // remove newline character. strchr() returns NULL if '\n' not found. p is pointer to the first occurrence of '\n'.
        *p = '\0';
    puts(words); // print the string array words followed by a newline
    scanf("%s", words+6); /* user inputs : snoopy. */ 
    puts(words); // print the string array words followed by a newline
    words[3] = '\0'; // truncate the string at index 3
    puts(words); // print the string array words, up till index 3, followed by a newline
    while (*M3) // print each character in the string literal M3 until null character is encountered
        puts(M3++); // print the string literal M3 starting from the current position followed by a newline, then increment M3 to point to the next character
    puts(--M3); // decrement M3 to point back to the last character and print the string literal M3 followed by a newline
    puts(--M3); // decrement M3 to point back to the second last character and print the string literal M3 followed by a newline
    M3 = M1; // reset M3 to point to the string literal M1
    puts(M3); // print the string literal M1 followed by a newline
    return 0;
}

