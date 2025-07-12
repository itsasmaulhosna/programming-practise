#include <stdio.h>
int main(){
    int num,result;
    printf("Enter the number:");
    scanf("%d",&num);
    result=square(num);
    printf("the sum is %d",result);
}
square(int a){
    return a*a;
}
