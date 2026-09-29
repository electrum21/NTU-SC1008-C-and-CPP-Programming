#include <stdio.h>
int main() 
{

   int height = 0;
   
   printf("Enter the height:\n");
   scanf("%d", &height);
   
   printf("The pattern is:\n");
   
   for (int i = 0; i < height; i++){
       for (int j = i; j >= 0; j--) {
           if ((j+2)%2 == 0) {
               printf("A");
           } else {
               printf("B");
           }
       }
       printf("\n");
   }

   return 0;
}