#include <stdio.h>
int main()
{
    double area;
    double base,height;
    print("Enter base and height:");
    scanf("%lf %lf", &base, &height);
    area = triangle (base,height);
    printf("area is %lf",area);
}
triangle (double b,double h){
    return .5*b*h;
}