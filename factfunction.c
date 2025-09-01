#include <stdio.h>
int fact(int x)
{
    if (x == 1 || x==0)
        return 1;
    else
        return x * fact(x - 1);
    
}

int main()
{
    int n,result;
    printf("Enter n:");
    scanf("%d", &n);
 result=fact(n);
 printf("%d",result);
    return 0;
}