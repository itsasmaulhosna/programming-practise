#include <stdio.h>
int main()
{
    int a=1,b=2,n1,n2,sum=0;
    printf("enter n1 and n2:");
    scanf("%d%d",&n1,&n2);
    while(a<=n1 && b<=n2){
        sum=sum+a*b;
        a++;
        b++;
    }
    printf("%d\n",sum);
    return 0;
}
