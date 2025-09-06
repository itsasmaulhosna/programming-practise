#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter the number of elements :");
    scanf("%d", &n);
int a[n];
printf("Enter the array elements:");
for(i=0;i<n;i++){
    scanf("%d", &a[i]);
}
int large =a[0];
for(i=0;i<n;i++){
    if(a[i]>large){
        large=a[i];
    }
}
printf("The largest number is %d",large);
    return 0;
}