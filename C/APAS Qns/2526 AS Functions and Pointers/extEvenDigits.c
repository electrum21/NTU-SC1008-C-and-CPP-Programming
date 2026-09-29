#include <stdio.h>
#define INIT_VALUE 999
int extEvenDigits1(int num);
void extEvenDigits2(int num, int *result);
int main()
{
   int number, result = INIT_VALUE;
   
   printf("Enter a number: \n");
   scanf("%d", &number);
   printf("extEvenDigits1(): %d\n", extEvenDigits1(number));        
   extEvenDigits2(number, &result);
   printf("extEvenDigits2(): %d\n", result);
   return 0;
}
int extEvenDigits1(int num) 
{  
   int sum = 0;
   int position = 1;
   
   while (num != 0) {
       int lastDigit = num % 10;
       if (lastDigit % 2 == 0) {
            sum += lastDigit * position;
            position *= 10;
       }
       num /= 10;
   }
   
   return sum?sum:-1;
}
void extEvenDigits2(int num, int *result) 
{  
   *result = 0;
   int position = 1;
   
   while (num != 0) {
       int lastDigit = num % 10;
       if (lastDigit % 2 == 0) {
            *result += lastDigit * position;
            position *= 10;
       }
       num /= 10;
   }
   
   *result = *result?*result:-1;
}