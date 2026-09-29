#include <stdio.h>
int main()  
{
    int height = 0;
    int currentDigit = 0;
    printf("Enter the height:\n");
    scanf("%d", &height);
    printf("The pattern is:\n");
    for (int i = 1; i < height+1; i++) {
        currentDigit = i;
        for (int j = 0; j < i; j++) {
            printf("%d", currentDigit % 10);
            currentDigit++;
        }
        printf("\n");
    }
    return 0;   
}