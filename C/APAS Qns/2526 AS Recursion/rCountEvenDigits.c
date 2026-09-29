#include <stdio.h>
int rCountEvenDigits1(int num); 
void rCountEvenDigits2(int num, int *result);
int main()
{
   int number, result=0;
   
   printf("Enter the number: \n");
   scanf("%d", &number);
   printf("rCountEvenDigits1(): %d\n", rCountEvenDigits1(number));
   rCountEvenDigits2(number, &result);
   printf("rCountEvenDigits2(): %d\n", result); 
   return 0;
}
int rCountEvenDigits1(int num) 
{
	if (num == 0) {
	    return 0;
	} else if (num < 10 && num % 2 == 0) {
	    return 1;
	}
	
	int lastDigit = num % 10;
	
	return (lastDigit%2 == 0) + rCountEvenDigits1(num/10);
}

void rCountEvenDigits2(int num, int *result) 
{
    if (num == 0) {
	    *result = 0;
	    return;
	} else if (num < 10 && num % 2 == 0) {
	    *result = 1;
	    return;
	}
	
	int lastDigit = num % 10;
	
	rCountEvenDigits2(num/10, result);
	
	if (lastDigit % 2 == 0) {
	    (*result)++;
	}
}