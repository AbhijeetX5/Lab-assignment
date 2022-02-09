#include<stdio.h>

int main()
{
    int n;
    printf("Array length : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int i=0; i<n; i++){
        sum=sum+arr[i];
    }
    printf("Sum of all elements in the Array is %d. \n",sum);
    return 0;
}   
