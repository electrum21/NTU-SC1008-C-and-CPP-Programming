#include <stdio.h>
#include <string.h>

void mergeStr(char *a, char *b, char *c);

int main() {
    char a[80],b[80];
    char c[80];
    printf("Enter the first string a: \n");
    scanf("%s",a);
    printf("Enter the second string b: \n");
    scanf("%s",b);
    mergeStr(a,b,c);
    printf("mergeStr(): %s", c);
    return 0;
}

void mergeStr(char *a, char *b, char *c) {
    int aIndex = 0;
    int bIndex = 0;
    int cIndex = 0;

    while (a[aIndex] != '\0' && b[bIndex] != '\0') {
        if (a[aIndex] <= b[bIndex]) {
            c[cIndex] = a[aIndex];
            aIndex++;
        } else {
            c[cIndex] = b[bIndex];
            bIndex++;
        }
        cIndex++;
    }
    while (a[aIndex] != '\0') {
        c[cIndex] = a[aIndex];
        cIndex++;
        aIndex++;
    }
    while (b[bIndex] != '\0') {
        c[cIndex] = b[bIndex];
        cIndex++;
        bIndex++;
    }
    c[cIndex] = '\0';
}