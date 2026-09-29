#include <stdio.h> 
#include <string.h> 

void insertChar(char *str1, char *str2, char ch); 

int main()  
{ 
   char a[80],b[80]; 
   char ch, *p; 
    
   printf("Enter a string: \n");   
   fgets(a, 80, stdin); 
   if (p=strchr(a,'\n')) *p = '\0';  
   printf("Enter a character to be inserted: \n");   
   ch = getchar(); 
   insertChar(a,b,ch); 
   printf("insertChar(): ");   
   puts(b);      
   return 0; 
} 
void insertChar(char *str1, char *str2, char ch) 
{ 
  int str1len = strlen(str1);
  int str2index = 0;

  for (int i = 0; i < str1len; i++) {
        *(str2 + str2index) = *(str1 + i);
        str2index++;
        if ((i+1) % 3 == 0) {
            *(str2 + str2index) = ch;
            str2index++;
        }
  }

  *(str2 + str2index) = '\0';

} 
