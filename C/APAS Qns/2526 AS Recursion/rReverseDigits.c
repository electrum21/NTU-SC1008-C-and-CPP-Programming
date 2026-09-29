#include <stdio.h>
void rReverseDigits(int num, int *result);
int main() 
{
   int result=0, number; 
   
   printf("Enter a number: \n");
   scanf("%d", &number);
   rReverseDigits(number, &result);
   printf("rReverseDigits(): %d\n", result);
   return 0;
}
void rReverseDigits(int num, int *result)
{
   if (num < 10) {
       *result = 10 * *result + num;
       return;
   }
   
   int lastDigit = num % 10;
   if (*result == 0){
       *result = lastDigit;
   } else {
       *result = 10 * *result + lastDigit;
   }
   rReverseDigits(num/10, result);
}