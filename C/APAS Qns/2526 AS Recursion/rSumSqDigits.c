#include <stdio.h>
int rSumSqDigits(int num);   
int main()
{
   int number;

   printf("Enter a number: \n");
   scanf("%d", &number);
   printf("rSumSqDigits(): %d\n", rSumSqDigits(number));
   return 0;
}
int rSumSqDigits(int num) 
{
    if (num < 10) {
        return num * num;
    }
    int lastDigit = num % 10;
    return lastDigit * lastDigit + rSumSqDigits(num/10);
}