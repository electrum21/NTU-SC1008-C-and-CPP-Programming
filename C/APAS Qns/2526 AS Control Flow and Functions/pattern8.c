#include <stdio.h>
int main() 
{        
    int height = 0;
    printf("Enter the height:\n");
    
    scanf("%d", &height);
    
    printf("The pattern is:\n");
    
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        for (int k = height - i; k > 0; k--) {
            printf("*");
        }
        printf("\n");
    }
   return 0;  
}