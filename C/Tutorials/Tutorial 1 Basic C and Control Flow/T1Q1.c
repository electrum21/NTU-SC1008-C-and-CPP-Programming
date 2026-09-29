#include <stdio.h>
#include <math.h> // fabs is to calculate absolute value of mathematics equation

int main(){
    float a1, b1, c1, a2, b2, c2;
    float x, y;
    printf("Enter the values for a1, b1, c1, a2, b2, c2:\n");
    // scanf("%d", &a1);
    // scanf("%d", &b1);
    // scanf("%d", &c1);
    // scanf("%d", &a2);
    // scanf("%d", &b2);
    // scanf("%d", &c2);
    scanf("%d %d %d %d %d %d", &a1, &b1, &c1, &a2, &b2, &c2);
    if (fabs(a1*b2 - a2*b1) >= 0.0001) { // check that denominator > 0; IMPORTANT EDGE CASE TO CONSIDER
        x = (b2*c1 - b1*c2)/(a1*b2 - a2*b1);
        y = (a1*c2 - a2*c1)/(a1*b2 - a2*b1);
        printf("x = %.2f and y = %.2f", x, y);
    } else {
        printf("Unable to compute because the denominator is zero!");
    }
    return 0;
}

// LEARNING POINT: HANDLE EDGE CASES E.G. DENOMINATOR MUST BE >0