#include <stdio.h>    
#include <string.h> 

char *strNRChr(char *str, int n, char ch); 

int main() 
{ 
   char str[80], ch, dummy; 
   char *temp=NULL;   
   int n; 
 
   printf("Enter a string: \n"); 
   scanf("%s",str);  
   scanf("%c",&dummy);  
   printf("Enter a char: \n"); 
   scanf("%c",&ch);     
   printf("Enter the occurrence: \n"); 
   scanf("%d", &n);     
   temp = strNRChr(str, n, ch);  
   if (temp!=NULL)   
      printf("strNRChr(): %s\n", temp);    
   else  
      printf("strNRChr(): null string\n"); 
   return 0; 
} 

char *strNRChr(char *str, int n, char ch) 
{  
    char *ptr = NULL;

    int lenstr = strlen(str);

    for (int i = lenstr-1; i >= 0; i--) {
        if (n == 1 && ch == str[i]) {
            ptr = &str[i];
            return ptr;
        } else if (ch == str[i]) {
            n--;
        }
    }

    return ptr;
}