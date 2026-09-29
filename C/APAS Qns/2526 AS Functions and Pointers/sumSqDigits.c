	/*edit*/

/*custom header*/

	/*end_edit*/
#include  <stdio.h>
int sumSqDigits1(int num);   
void sumSqDigits2(int num, int *result);   
int main()
{
   int num, result;

   printf("Enter a number: \n");
   scanf("%d", &num);
   printf("sumSqDigits1(): %d\n", sumSqDigits1(num));
   sumSqDigits2(num, &result);
   printf("sumSqDigits2(): %d\n", result);
   return 0;
}
int sumSqDigits1(int num) 
{
	/*edit*/
   int sum = 0;
   while (num != 0) {
       int lastDigit = num % 10;
       num /= 10;
       sum = sum + lastDigit * lastDigit;
   }
   
   return sum;
	/*end_edit*/
}
void sumSqDigits2(int num, int *result) 
{
	/*edit*/
   *result = 0;
   while (num != 0) {
       int lastDigit = num % 10;
       num /= 10;
       *result = * result + lastDigit * lastDigit;
   }
	/*end_edit*/
}