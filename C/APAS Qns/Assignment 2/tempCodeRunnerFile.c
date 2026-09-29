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