#include <stdio.h> 
#include <string.h> 

void insertChar(char *str1, char *str2, char ch); 

int main() { 
    char a[80], b[80]; 
    char ch, *p; 
    printf("Enter a string: \n"); 
    fgets(a, 80, stdin); 
    if (p=strchr(a,'\n')) *p = '\0'; 
    printf("Enter a character to be inserted: \n"); 
    ch = getchar(); 
    insertChar(a,b,ch); 
    printf("insertChar(): "); 
    puts(b); 
    return 0; 
} 

void insertChar(char *str1, char *str2, char ch) {
    int indexStr1 = 0;
    int indexStr2 = 0;
    int str1Length = strlen(str1);
    while (indexStr1 < str1Length && (*(str1 + indexStr1) != '\0')) {
        *(str2 + indexStr2) = *(str1 + indexStr1);
        if ((indexStr1 + 1) % 3 == 0) {
            indexStr2++;
            *(str2 + indexStr2) = ch;
        }
        indexStr1++;
        indexStr2++;
    }
    *(str2 + indexStr2) = '\0';
}