#include <stdio.h>
int main()
{
    int i, a[10], small;
    printf("Enter the array elements:");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    small = a[0];
    for (i = 0; i < 10; i++)
    {
        if (a[i] < small)
        {
            small = a[i];
        }
    }
    printf("The smallest number is %d", small);
    return 0;
}