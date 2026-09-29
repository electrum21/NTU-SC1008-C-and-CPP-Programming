	/*edit*/

/*custom header*/

	/*end_edit*/
#include <stdio.h>
#include <math.h>
float power1(float num, int p);
void power2(float num, int p, float *result);
int main()
{
   int power;
   float number, result=-1;
   
   printf("Enter the number and power: \n");
   scanf("%f %d", &number, &power);
   printf("power1(): %.2f\n", power1(number, power));                          
   power2(number,power,&result);
   printf("power2(): %.2f\n", result);              
   return 0;
}

// Using in-built math library
// float power1(float num, int p)
// {
//     return pow(num, p);
// }
// void power2(float num, int p, float *result)
// {
// 	*result = pow(num,p);
// }

float power1(float num, int p)
{
   double result = 1;
   if (p > 0) {
       for (int i = 0; i < p; i++) {
           result *= num;
       }
   } else if (p < 0) {
       for (int i = p; i < 0; i++) {
           result *= (1.00/num);
       }
   }
   return result;
}

void power2(float num, int p, float *result)
{
    *result = 1;
    if (p > 0) {
       for (int i = 0; i < p; i++) {
           *result = *result * num;
       }
   } else if (p < 0) {
       for (int i = p; i < 0; i++) {
           *result *= (1.00/num);
       }
   }
}

