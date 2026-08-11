#include <stdio.h>
int main() {
   //area of rectangle is length * breadth
   //perimeeter of rectangle is 2*(lenght =breadth)
   float L,B, area,perimeter;
   printf("\n enter the length");
   scanf("%f",&L);
   printf("\n enter the breadth");
    scanf("%f",&B);
    area = L * B;
    perimeter = 2 * (L + B);
   printf("\n Area of rectangle is: %f", area);
   printf("\n Perimeter of rectangle is: %f", perimeter);
    return 0;
}