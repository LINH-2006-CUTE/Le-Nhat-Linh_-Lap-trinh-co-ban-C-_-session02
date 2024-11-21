#include <stdio.h>

int main() {
   
    float length;  
    float width;   

    length = 4.0;  
    width = 2.0;   


    float perimeter = 2 * (length + width); 
    float area = length * width;             

    printf("Chu vi hinh chu nhat: %.2f\n", perimeter);
    printf("Dien tich hinh chu nhat: %.2f\n", area);

    return 0;
}
