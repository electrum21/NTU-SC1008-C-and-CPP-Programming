	/*edit*/

/*custom header*/

	/*end_edit*/
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
	/*edit*/
   /* Write your code here */
    int evenNum = 0;
    int found = 0;
    int multiplier = 1;

    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 == 0) {
            evenNum += multiplier * digit;
            multiplier *= 10;
            found = 1;
        }
        num /= 10;
    }
    return found ? evenNum : -1;

	/*end_edit*/
}
void extEvenDigits2(int num, int *result) 
{  
	/*edit*/
   /* Write your code here */
    *result = 0;
    int found = 0;
    int multiplier = 1;

    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 == 0) {
            (*result) += multiplier * digit;
            multiplier *= 10;
            found = 1;
        }
        num /= 10;
    }
    if (!found) {
        (*result) = -1;
    }

	/*end_edit*/
}