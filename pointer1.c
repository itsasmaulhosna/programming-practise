#include <stdio.h>
void swap(int *x, int *y)
{
    int temp;
     temp = *x; // temp=2
    *x = *y;       // a=5
    *y = temp;     // b=2
}
int main()
{
    int a = 7;
    int b = 9;
    swap(&a, &b);
    printf("%d\n", a);
    printf("%d\n", b);
    return 0;
}
