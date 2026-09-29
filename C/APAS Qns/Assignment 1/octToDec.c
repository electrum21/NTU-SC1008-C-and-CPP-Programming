#include <stdio.h> 
#include <math.h> 
int main() 
{       
   int octalNumber = 0;
   int decNumber = 0;
   int powerPosition = 0;
   int mod = 0;
   printf("Enter an octal number:\n");
   scanf("%d", &octalNumber);
   while (octalNumber > 0) {
      mod = octalNumber % 10;
      decNumber += mod * pow(8, powerPosition);
      powerPosition++;
      octalNumber = octalNumber / 10;  // integer division, e.g. 345 / 10 == 34     
   }

   printf("The equivalent decimal number: %d", decNumber);
   return 0;   
} 

// e.g. octal 30 --> 0 * 8^0 + 3 * 8^1 == 24
// e.g. octal 100 --> 0 * 8^0 + 0 * 8^1 + 1 * 8^2 == 64