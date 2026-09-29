	/*edit*/

/*custom header*/

	/*end_edit*/
#include <stdio.h>
#include <math.h>
typedef struct {
   double real;
   double imag;
} Complex;
Complex add(Complex c1, Complex c2);
Complex mul(Complex c1, Complex c2);
Complex sub(Complex *c1, Complex *c2);
Complex div(Complex *c1, Complex *c2);
int main()
{
   int choice;
   Complex input1, input2, result;
   
   printf("Complex number operations: \n");
   printf("1 - addition \n");    
   printf("2 - subtraction \n");
   printf("3 - multiplication \n");
   printf("4 - division \n");
   printf("5 - quit \n");
   do {         
      printf("Enter your choice: \n");   
      scanf("%d", &choice);
      if (choice == 5) 
         return 0;           
      printf("Enter Complex Number 1: \n");
      scanf("%lf %lf", &input1.real, &input1.imag);
      printf("Enter Complex Number 2: \n");
      scanf("%lf %lf", &input2.real, &input2.imag); 
      switch (choice) {    
         case 1: result = add(input1, input2);
            break;
         case 2: result = sub(&input1, &input2);
            break;
         case 3: result = mul(input1, input2);
            break;
         case 4: result = div(&input1, &input2);
            break;
      }
      printf("complex(): real %.2f imag %.2f\n", result.real, result.imag); 
   } while (choice<5);
   return 0;
}
Complex add(Complex c1, Complex c2)
{
	/*edit*/
    double c1real = c1.real;
    double c2real = c2.real;
    double c1imag = c1.imag;
    double c2imag = c2.imag;
    Complex c3;
    c3.real = c1real+c2real;
    c3.imag = c1imag+c2imag;
    return c3;


	/*end_edit*/
}
Complex sub(Complex *c1, Complex *c2)
{
	/*edit*/
    double c1real = c1->real;
    double c2real = c2->real;
    double c1imag = c1->imag;
    double c2imag = c2->imag;
    Complex c3;
    c3.real = c1real-c2real;
    c3.imag = c1imag-c2imag;
    return c3;


	/*end_edit*/
}
Complex mul(Complex c1, Complex c2)
{
	/*edit*/
    /* Write your code here */
    double c1real = c1.real;
    double c2real = c2.real;
    double c1imag = c1.imag;
    double c2imag = c2.imag;
    Complex c3;
    c3.real = c1real * c2real -c2imag * c1imag;
    c3.imag = c1real * c2imag + c2real * c1imag;
    return c3;

	/*end_edit*/
}
Complex div(Complex *c1, Complex *c2)
{
	/*edit*/
    /* Write your code here */
    double c1real = c1->real;
    double c2real = c2->real;
    double c1imag = c1->imag;
    double c2imag = c2->imag;
    Complex c3;
    c3.real = (c1real * c2real + c2imag * c1imag) / (c2real * c2real + c2imag * c2imag);
    c3.imag = (c1imag * c2real - c1real * c2imag) / (c2real * c2real + c2imag * c2imag);
    return c3;

	/*end_edit*/
 }