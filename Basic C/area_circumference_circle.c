#include<stdio.h>
int main(){
    int circle_radius;
    float area,circumference,PI_VALUE=3.14;
    circle_radius=7;
    area=PI_VALUE*circle_radius*circle_radius;
    circumference=2*PI_VALUE*circle_radius;
    printf("The area of the circle is:%f\n",area);
    printf("The circumference of the circle is:%f",circumference);
    return 0;
}
//Area and circumference of a circle with radius 7 units