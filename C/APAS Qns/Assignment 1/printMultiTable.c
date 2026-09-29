#include <stdio.h>
int main()  
{
   /* Write your code here */
   int num = 0;
   printf("Enter a number (between 1 and 9):\n");
   scanf("%d", &num);
   printf("Multiplication Table:\n");
   printf("  ");
   for (int row = 1; row < num+1; row++) {
    printf("%d ", row);
   }
   printf("\n");
   for (int i = 1; i < num+1; i++) {
        printf("%d ", i);
        for (int j = 1; j < i+1; j++) {
            printf("%d ", j*i);
        }
        printf("\n");
   }
   return 0;
}