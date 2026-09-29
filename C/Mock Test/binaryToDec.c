#include <stdio.h> 
#include <math.h> 

int main(){
    char bin[50];
    int decVal = 0;

    int i = 0;
    int length = 0;

    printf("Enter a binary number: \n");
    scanf("%49s", bin);

    while (bin[length] != '\0'){
        length++;
    }
    
    for (i = 0; i < length; i++){
        if (bin[i] == '1') {
            decVal += pow(2, length - i - 1);
        }
    }
    printf("The equivalent decimal number: %d", decVal);
    return 0;

}