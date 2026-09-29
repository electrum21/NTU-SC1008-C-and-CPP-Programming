#include <stdio.h>
void rItoSReverse(int num, char *numStr);
int main()
{
   int num;
   char numStr[20];

   printf("Enter a positive integer number (greater than 0): \n");
   scanf("%d", &num);
   rItoSReverse(num, numStr);
   printf("rItoSReverse(): %s\n", numStr);
   return 0;
}
void rItoSReverse(int num, char *numStr) 
{  
   	if (num == 0){
   	    *numStr = '\0';
   	    return;
   	}
    
   	
   	int lastDigit = num % 10;
   	
   	*numStr = lastDigit + '0';
   	
   	rItoSReverse(num/10, numStr+1);
 }