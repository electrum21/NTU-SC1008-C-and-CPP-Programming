#include <stdio.h>
int main()  
{
    int height = 0;
    printf("Enter the height:\n");
    scanf("%d", &height);
    printf("The pattern is:\n");
    for (int i = 1; i < height + 1; i++) {
        for (int j = 0; j < height - i; j++) {
            printf(" ");
        }
        for (int k = 0; k < i; k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;   
}