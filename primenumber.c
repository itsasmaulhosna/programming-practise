#include <stdio.h>
int main()
{
    int num, i;
    printf("Enter any number:");
    scanf("%d", &num);
    for (i = 2; i < num; i++)
    {
        if (num % 2 == 0)
        {
            printf("prime number\n");
        }
        else
        {
            printf("not prime numbe\n");
        }
    }
    return 0;
}