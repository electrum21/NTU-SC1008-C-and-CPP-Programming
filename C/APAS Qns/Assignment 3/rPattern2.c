#include <stdio.h> 

void rPattern2(int height); 
int main() { 
    int height; 
    printf("Enter the height: \n"); 
    scanf("%d", &height); 
    printf("The pattern is: \n");
    rPattern2(height); 
    return 0; 
} 

void rPattern2(int height) { 
    if (height <= 0) {
        return;
    }
    for (int i = 0; i < height; i++) {
        printf("*");
    }
    printf("\n");
    rPattern2(height - 1);
}
