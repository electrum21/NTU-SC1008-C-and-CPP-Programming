#include <stdio.h> 
int main()  
{  
   int discount = 10;
   int luxurytax = 10;
   int gsttax = 3;
   int coe = 0;
   double listPrice = 0.00;
   int category = 0;
   double finalPrice = 0;

   printf("Please enter the list price:\n");
   scanf("%lf", &listPrice);

   printf("Please enter the category:\n");
   scanf("%d", &category);

   finalPrice = 0.9 * listPrice;
   if (finalPrice > 100000) {
        finalPrice *= 1.1;
   }
   finalPrice *= 1.03;

   switch(category) {
    case 1:
        finalPrice += 70000;
        break;
    case 2:
        finalPrice += 80000;
        break;
    case 3:
        finalPrice += 23000;
        break;
    case 4:
        finalPrice += 600;
        break;
    default:
        printf("Invalid category");
        break;        
   }

   printf("Total price is $%.2f", finalPrice);
    
   return 0;   
} 
