#include <stdio.h>
int main()
{
    int num, result;
    printf("Enter the nummber of fibonacci series:");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("fibonacci of negative is not possible\n");
    }
    else
    {
        result = fibo(num);
        printf("fibonacci series is %d\n", result);
    }
    return 0;
}
int fibo(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 1;
    }
    else
    {
        return (fibo(num-1)+fibo(num-2));
    }
}