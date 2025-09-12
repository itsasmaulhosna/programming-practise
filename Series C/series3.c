#include <stdio.h>
int main()
{
    float i,n,sum=0;
    printf("Enter the last number:");
    scanf("%f",&n);
    for(i=1.5;i<=n;i++){
        sum=sum+i;
    }
    printf("%f\n",sum);
 return 0;
}