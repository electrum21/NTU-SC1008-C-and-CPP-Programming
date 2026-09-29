#include <stdio.h>
void rPrintStars1(int ar[20], int size);
int main()
{
   int ar[20], size, i;
   
   printf("Enter size: \n");
   scanf("%d", &size);
   printf("Enter array data: \n");
   for (i=0; i<size; i++)
      scanf("%d", &ar[i]);
   printf("The output is: \n");
   rPrintStars1(ar, size);   
   return 0;
}
void rPrintStars1(int ar[20], int size)
{
   if (size == 1) {
       for (int i = 0; i < ar[0]; i++) {
           printf("*");
       }
       printf("\n");
       return;
   }
   
   int toPrint = ar[0];
   
   rPrintStars1(ar+1, size-1);
   
   for (int i = 0; i < toPrint; i++) {
           printf("*");
   }
   printf("\n");
}