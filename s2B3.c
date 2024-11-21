#include <stdio.h>

int main() {
    
    int num1 = 5;
    int num2 = 10;

    int difference, product;
    float quotient;

    difference = num1 - num2;    
    product = num1 * num2;      

    if (num2 != 0) {
        quotient = (float)num1 / num2; 
    } else {
        quotient = 0; 
    }

    printf("Hi?u: %d\n", difference);
    printf("Tích: %d\n", product);
    printf("Thýõng: %.2f\n", quotient);

    return 0;
}
