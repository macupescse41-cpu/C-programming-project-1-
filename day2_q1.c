#include<stdio.h>
int main() {
 float R, area,circumference;
 printf("enter the radius of the circle:");
 scanf("%f",&R);
    area = 3.14*R;
    circumference = 2*3.14*R;
    printf("\n AREA of circle is %f",area);
    printf("\n CIRCUMFERENCE of circle is %f",circumference);
    return 0;
}