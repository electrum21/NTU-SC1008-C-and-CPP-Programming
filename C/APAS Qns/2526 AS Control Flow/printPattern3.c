#include <stdio.h>
int main()
{
	/*edit*/
   int height = 0;
   
   printf("Enter the height:\n");
   
   scanf("%d", &height);
   printf("The pattern is:\n");
   for (int i = 1; i < height+1; i++) {
        for (int j = 0; j < i; j++) {
            printf("%d", (j+i)%10);
        }
        printf("\n");
   }

   return 0;
}