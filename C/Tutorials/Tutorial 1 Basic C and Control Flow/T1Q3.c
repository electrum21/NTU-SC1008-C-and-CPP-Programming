#include <stdio.h> 

// int main() {
//     int height;
//     printf("Enter the height:\n");
//     scanf("%d", &height);
//     for (int i = 1; i < (height+1); i++) {
//         for (int j = 0; j < i; j++) {
//             printf("%d", (i-1)%3 + 1);
//         }
//         printf("\n");
//     }
//     return 0;
// }

int main() {
    int row, col, height;
    int num = 0;
    printf("Enter the height: \n");
    scanf("%d", &height);
    printf("Pattern: \n");
    for (row = 0; row < height; row++) {
        for (col = 0; col < row + 1; col++) {
            printf("%d", num+1);
        }
        num = (num + 1) % 3;
        printf("\n");
    }
    return 0;
}