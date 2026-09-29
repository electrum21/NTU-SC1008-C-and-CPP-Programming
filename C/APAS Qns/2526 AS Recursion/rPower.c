	/*edit*/

/*custom header*/

	/*end_edit*/
#include <stdio.h>
float rPower1(float num, int p);
void  rPower2(float num, int p, float *result);
int main()
{
   int power;
   float number, result;
   
   printf("Enter the number and power: \n");
   scanf("%f %d", &number, &power);
   printf("rPower1(): %.2f\n", rPower1(number, power));          
   rPower2(number, power, &result);
   printf("rPower2(): %.2f\n", result); 
   return 0;
}
float rPower1(float num, int p)
{
   if (p == 0) {
       return 1;
   }
   
   if (p > 0) {
       return num * rPower1(num, p-1);
   }
   
   if (p < 0) {
       return (1/num) * rPower1(num, p+1);
   }

	/*end_edit*/
}
void rPower2(float num, int p, float *result)
{
   if (p == 0) {
       *result = 1;
   }
   
   if (p > 0) {
       rPower2(num, p-1, result);
       *result *= num;
   }
   
   if (p < 0) {
       rPower2(num, p+1, result);
       *result *= (1/num);
   }
}