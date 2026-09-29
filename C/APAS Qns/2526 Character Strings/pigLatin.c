#include <stdio.h>
#include <string.h>
void PigLatin(char *eword, char *PLword);
int main()
{
   char eword[80];
   char PLword[80];
   printf("Enter your English word: \n");
   scanf("%s", eword);
   PigLatin(eword, PLword);
   printf("PigLatin(): %s\n", PLword);
   return 0;
}
void PigLatin(char *eword, char *PLword)
{  
    int elength = strlen(eword);
    char first = eword[0];

    // Rule 2: Starts with a vowel (a, e, i, o, u) or 'y'
    if (first == 'a' || first == 'e' || first == 'i' || first == 'o' || first == 'u' || first == 'y') {
        strcpy(PLword, eword);
        strcat(PLword, "ay");
    } 
    else {
        // Rule 1: Starts with one or more consonants
        int vIdx = 0;
        
        // Find the index of the first vowel (y is NOT a vowel for this check)
        while (vIdx < elength && 
               eword[vIdx] != 'a' && eword[vIdx] != 'e' && 
               eword[vIdx] != 'i' && eword[vIdx] != 'o' && 
               eword[vIdx] != 'u') {
            vIdx++;
        }

        // 1. Copy the part starting from the first vowel
        strcpy(PLword, &eword[vIdx]);
        
        // 2. Append the consonants from the start (vIdx tells us how many)
        strncat(PLword, eword, vIdx);
        
        // 3. Append "ay"
        strcat(PLword, "ay");
    }
}