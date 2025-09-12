#include <stdio.h>
int main()
{
    double i, n, sum = 0;
    printf("Enter the last number:");
    scanf("%lf", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + 1 / i;
        if (i == 1)
        {
            printf("1");
        }
        else
        {
            printf("+1/%lf", i);
        }
    }
    printf("%lf\n", sum);
    return 0;
}