#include <stdio.h>
int sum(int x)
{
    if (x == 1)
        return 1;
    else
        return x + sum(x - 1);
    
}

int main()
{
    int n,result;
    printf("Enter n:");
    scanf("%d", &n);
 result=sum(n);
 printf("%d",result);
    return 0;
}