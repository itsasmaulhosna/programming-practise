#include <stdio.h>
int main()
{
    int A, B, C;
    printf("Enter the value of three number:");
    scanf("%d %d %d", &A, &B, &C);
    if (A > B && A > C)
    {
        printf("largest nummber is %d", A);
    }
    else if (B>A && B>C){
        printf("largest number is %d",B);
    }
    else{
        printf("largest number is %d",C);
    }
    return 0;
}