#include <stdio.h>
int max(int x[], int n)
{
    int i;
    int maximum = x[0];
    for (i = 1; i < n; i++)
    {
        if (maximum < x[i])
        {
            maximum = x[i];
        }
    }
    return maximum;
}
int main()
{
    int num[] = {1, 4, 5, 6, 9};
   // int maximum = max(num,5);
    printf("%d\n", num[0]);
    return 0;
}