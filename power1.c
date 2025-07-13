#include <stdio.h>
void calculatePower(int base, int exp)
{
    int result = 1,i;
    for (i = 1; i <= exp; i++)
    {
        result = result * base;
    }
    printf("%d\n", result);
}
int main()
{
    int base,exp;
    printf("Enter the base=");
    scanf("%d", &base);
    printf("Enter exponont=");
    scanf("%d", &exp);
    calculatePower(base, exp);
    return 0;
}
