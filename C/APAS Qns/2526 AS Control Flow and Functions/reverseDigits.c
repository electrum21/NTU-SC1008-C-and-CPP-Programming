#include <stdio.h> 
int reverseDigits1(int num); 
void reverseDigits2(int num, int *result); 
int main() 
{ 
   int num, result=999; 
 
   printf("Enter a number: \n"); 
   scanf("%d", &num);      
   printf("reverseDigits1(): %d\n", reverseDigits1(num)); 
   reverseDigits2(num, &result); 
   printf("reverseDigits2(): %d\n", result); 
   return 0; 
} 
int reverseDigits1(int num) 
{ 
  int result = 0; // initialize the result variable 
  while (num > 0) {
    int lastDigit = num % 10; // obtain last digit, e.g. for 12345, first iteration lastDigit = 5
    result = result * 10 + lastDigit; // result = 0 * 10 + 5, then result = 5 * 10 + 4... until reverse order
    num /= 10; // remember to divide num by 10
  }
  return result;
    
} void reverseDigits2(int num, int *result) 
{ 
  *result = 0; // initialize the result variable 
  while (num > 0) {
    int lastDigit = num % 10; // obtain last digit, e.g. for 12345, first iteration lastDigit = 5
    *result = *result * 10 + lastDigit; // result = 0 * 10 + 5, then result = 5 * 10 + 4... until reverse order
    num /= 10; // remember to divide num by 10
  }
}