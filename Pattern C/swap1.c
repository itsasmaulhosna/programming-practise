#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter value of three number:");
    scanf("%d%d%d",&a,&b,&c);
    a=a+b+c;
    b=a-b-c;
    c=a-b-c;
    a=a-b-c;
    printf("After swapping the value of a=%d b=%d c=%d",a,b,c);
    return 0;
}