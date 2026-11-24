
#include <stdio.h>

int main() {

    float pound, kg, g;

    printf("Enter weight (in pounds): ");
    scanf("%f", &pound);

    kg = pound * 0.453592;
    g = kg * 1000;

    printf("\nThe input weight is equivalent to: %.3f kilograms, and %.2f grams.\n", kg, g);

    int num1, num2, sum, dif, pro;
    float quo;

    printf("Enter 1st number: ");
    scanf("%d", &num1);

    printf("Enter 2nd number: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    dif = num1 - num2;
    pro = num1 * num2;
    quo = (float)num1 / num2;

    printf("\n\nSum = %d, Difference = %d, Product = %d, Quotient = %.2f\n", sum, dif, pro, quo);

    return 0;
}
