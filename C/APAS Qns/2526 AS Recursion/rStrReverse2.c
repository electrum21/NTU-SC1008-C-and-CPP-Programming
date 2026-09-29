#include <stdio.h>
#include <string.h>
void rStrReverse2(char *str, int n);
int main()
{
   char str[40], *p;
    
   printf("Enter a string: \n");
   fgets(str, 40, stdin);
   if (p=strchr(str,'\n')) 
      *p = '\0';   
   rStrReverse2(str,strlen(str));
   printf("rStrReverse2(): %s", str);   
   return 0;
}
void rStrReverse2(char *str, int n)
{
	if (n <= 1) {
	    return;
	}
	
	char tmp = str[n-1];
	str[n-1] = str[0];
	str[0] = tmp;
	rStrReverse2(str+1, n-2);
}