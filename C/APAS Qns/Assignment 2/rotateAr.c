#include <stdio.h>
#define N 20

int main() {
    int a[N],i,j,k,m;
    int size;
    /* Write your code here – for additional local variables */
    printf("Enter array size: \n");
    scanf("%d",&size);
    printf("Enter %d data: \n", size);
    for (i=0; i<size; i++)
        scanf("%d", &a[i]);
    printf("Result: \n");
    /* Write your code here */
    for (int i = 0; i < size; i++) { // outer loop to deal with number of lines printed
        int lastVar = a[size - 1];
        for (int j = size-1; j > 0; j--) { // inner loop to perform right shift of variables by 1 position
            a[j] = a[j - 1];
        }
        a[0] = lastVar;
        for (int k = 0; k < size; k++) { // another loop for printing
            printf("%d", a[k]);
        }
        printf("\n");
    }

    return 0;

}
