#include <stdio.h> 
int main() 
{ 
   int number = 0;
   int digit = 0;
   printf("Enter the number:\n");
   scanf("%d", &number);
   if (number > 99) {
    printf("Input exceeds 99");
   } else {
        if (number == 0) {
            printf("zero\n");
        }
        while (number > 0){
            digit = number % 10;
            switch(digit) {
                case 0: printf("zero "); break;
                case 1: printf("one "); break;
                case 2: printf("two "); break;
                case 3: printf("three "); break;
                case 4: printf("four "); break;
                case 5: printf("five "); break;
                case 6: printf("six "); break;
                case 7: printf("seven "); break;
                case 8: printf("eight "); break;
                case 9: printf("nine "); break;
            }
            number = number / 10;
        }
   }
   return 0;
    
}