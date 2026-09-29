#include <stdio.h>
#include <string.h>
void rStrReverse1(char *s);
int main()
{
   char str[40], *p;
    
   printf("Enter a string: \n");
   fgets(str, 40, stdin);
   if (p=strchr(str,'\n')) 
      *p = '\0';   
   rStrReverse1(str);
   printf("rStrReverse1(): %s", str);   
   return 0;
}
void rStrReverse1(char *s)
{
	int slen = strlen(s);
	if (slen <= 1) {
	    return;
	}
	
	char tmp = s[0];
	s[0] = s[slen-1];
	

	s[slen - 1] = '\0';
	rStrReverse1(s+1);
	s[slen-1] = tmp;
}