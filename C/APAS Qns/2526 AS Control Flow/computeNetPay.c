#include <stdio.h>

int main() {

    int hours = 0;
    float grosspay = 0.00;
    float basic = 6.00;
    float overtime = 1.5 * 6.00;
    float totaltax = 0.00;
    float netpay = 0.00;

    printf("Enter hours of work:\n");
    scanf("%d", &hours);

    if (hours > 40) {
        grosspay = basic * 40 + overtime * (hours - 40);
    } else {
        grosspay = basic * hours;
    }

    if (grosspay <= 1000) {
        totaltax = 0.1 * grosspay;
    } else if (grosspay <= 1500) {
        totaltax = 0.1 * 1000 + 0.2 * (grosspay - 1000);
    } else {
        totaltax = 0.1 * 1000 + 0.2 * 500 + 0.3 * (grosspay - 1500);
    }

    printf("Gross pay=%.2f\n", grosspay);
    printf("Tax=%.2f\n", totaltax);
    printf("Net pay=%.2f\n", grosspay - totaltax);

    return 0;
}