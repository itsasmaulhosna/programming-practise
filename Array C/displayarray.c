#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    printf("The  elements in the array are:\n");//displaying the elements of the array
    for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
        sum=sum+arr[i];
    
    }
    printf("The sum of the elements in the array is:%d",sum);
    return 0;
}