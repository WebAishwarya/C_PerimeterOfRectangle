#include <stdio.h>

int main() 
{
    float length = 20;
    float width = 55;
    float PerimeterOfRectangle;
    
    PerimeterOfRectangle = 2 * (length + width);
    
    printf("Value of length is : %.2f\nValue of width is : %.2f\n\n", length,width);
    printf("Perimeter of the rectangle : %.2f\n", PerimeterOfRectangle);
    
    return 0;
}
