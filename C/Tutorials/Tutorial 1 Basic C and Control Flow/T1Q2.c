#include <stdio.h> 
#include <ctype.h>

// int main() {
//     printf("Enter your characters (# to end) :\n");
//     char character = '\0';
//     int digits = 0;
//     int letters = 0;
//     while (character != '#') {
//         character = getchar();
//         if (character == '#') {
//             break;
//         }
//         if (character == ' ') {
//             continue;
//         } else if (isdigit(character)) {
//             digits++;
//         } else { // not good enough, can be non-alphanumeric characters.
//             letters++;
//         }
//     }
//     printf("The number of digits: %d\n", digits);
//     printf("The number of letters: %d", letters);
//     return 0;
// }


int main() {
    int ccount = 0, dcount = 0;
    char ch;
    printf("Enter your characters (# to end): \n");
    scanf("%c", &ch);
    while (ch != '#') {
        if (ch >= '0' && ch <= '9') {
            dcount++;
        } else if ((ch >= 'A' && ch <=  'Z') || (ch >= 'a' && ch <= 'z')) {
            ccount++;
        }
        scanf("%c", &ch);
    }
    printf("The number of digits: %d\n", dcount);
    printf("The number of letters: %d\n", ccount);
    return 0;
}

// LEARNING POINT: METHOD TO HANDLE ALPHABET CHARACTER CHECK