#include <stdio.h>

int main() {

    float radius;

    radius = 2;  

    float circumference = 2 * 3.14 * radius; 
    float area = 3.14 * radius * radius;      

    printf("Chu vi hinh tron: %.2f\n", circumference);
    printf("Di?n tích hinh tron: %.2f\n", area);

    return 0;
}
