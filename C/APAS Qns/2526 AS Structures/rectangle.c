	/*edit*/

/*custom header*/

	/*end_edit*/
#include <stdio.h>
#include <math.h>
typedef struct {
   double x;
   double y;
} Point;
typedef struct {
   Point topLeft;    /* top left point of rectangle */
   Point botRight;   /* bottom right point of rectangle */
} Rectangle;
void getRect(Rectangle *r);
void printRect(Rectangle r);
double findArea(Rectangle r);
int main()
{
   Rectangle r;
   int choice;

   printf("Select one of the following options:\n");
   printf("1: getRect()\n");     
   printf("2: findArea()\n");
   printf("3: printRect()\n");      
   printf("4: exit()\n");    
   do {
      printf("Enter your choice: \n");
      scanf("%d", &choice);  
      switch (choice) {
         case 1:           
            printf("getRect(): \n");
            getRect(&r);           
            break;               
         case 2:
            printf("findArea(): %.2f\n", findArea(r));            
            break;                             
         case 3:
            printf("printRect(): \n");            
            printRect(r);              
            break;                             
         default: 
            break;
      } 
   } while (choice < 4);
   return 0;
}
void getRect(Rectangle *r)
{
	/*edit*/
    printf("Enter top left point:\n");
    // Use %lf for double, and & for the memory address
    scanf("%lf %lf", &r->topLeft.x, &r->topLeft.y);
    
    printf("Enter bottom right point:\n");
    scanf("%lf %lf", &r->botRight.x, &r->botRight.y);
	/*end_edit*/
}
void printRect(Rectangle r)
{
   printf("Top left point: %.2f %.2f\n", r.topLeft.x, r.topLeft.y); 
   printf("Bottom right point: %.2f %.2f\n", r.botRight.x, r.botRight.y);
}
double findArea(Rectangle r)
{
	/*edit*/
    double width, height;
    
    // Width is the difference in x: (right.x - left.x)
    width = r.botRight.x - r.topLeft.x;
    
    // Height is the difference in y: (top.y - bottom.y)
    // We use fabs() from <math.h> to ensure the result is positive
    height = fabs(r.topLeft.y - r.botRight.y);
    
    return width * height;
	/*end_edit*/
}