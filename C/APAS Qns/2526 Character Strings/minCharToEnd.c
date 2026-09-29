	/*edit*/

/*custom header*/

	/*end_edit*/
#include <stdio.h>
#include <string.h>
void minCharToEnd(char *str);
int main()
{
   char str[80];
   
   printf("Enter a string: \n");
   scanf("%s",str);
   minCharToEnd(str); 
   printf("minCharToEnd(): %s",str);  
   return 0;
}
void minCharToEnd(char *str) 
{   
    int slen = strlen(str);
    int minIndex = 0;
    char minChar = str[0];
    
    for (int i = 1; i < slen; i++) {
        if (str[i] < minChar) {
            minIndex = i;
            minChar = str[i];
        }
    }
    
    for (int i = minIndex; i < slen-1; i++) {
        str[i] = str[i+1];
    }
    
    str[slen-1] = minChar;
}