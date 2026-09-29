#include <stdio.h>

int main(){        
    int height;

    printf("Enter the height: \n");
    scanf("%d", &height);

    printf("The pattern is: \n");

    for (int i = 0; i <= height; i++){
        for (int j = 0; j < (height - i); j++)
            printf(" ");
        for (int j = 0; j < 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }

    return 0;  
}