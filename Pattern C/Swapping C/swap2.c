#include <stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter value of three number:");
    scanf("%d %d %d",&a,&b,&c);
    d=a;
    a=b;
    b=c;
    c=d;
    printf("After swapping the value of a=%d b=%d c=%d",a,b,c);
    return 0;
}