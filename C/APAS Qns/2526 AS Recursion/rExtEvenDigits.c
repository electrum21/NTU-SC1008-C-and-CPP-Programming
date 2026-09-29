#include <stdio.h>
void rExtEvenDigits(int num, int *evenPtr);
int main()
{
   int number, result=0;

   printf("Enter a number: \n");
   scanf("%d", &number);
   rExtEvenDigits(number, &result);
   printf("rExtEvenDigits(): %d\n", result);
   return 0;
}
void rExtEvenDigits(int num, int *evenPtr)
{
   if (num < 10) {
       if (num % 2 == 0) {
           *evenPtr = num;
           return;
       } else {
           *evenPtr = -1;
           return;
       }
   }
   
   int lastDigit = num % 10;
   rExtEvenDigits(num/10, evenPtr);
   
   if (lastDigit % 2 == 0) {
       if (*evenPtr == -1) {
           *evenPtr = lastDigit;
       } else {
           *evenPtr = 10 * *evenPtr + lastDigit;
       }
   }
}