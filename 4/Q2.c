#include<stdio.h>

int main()
{
    int n=10;
    int arr[n]={23, 10, 34, 23, 90, 10, 34, 23, 56, 49};
    int sum=0;
    for(int i=0; i<n; i++){
        sum=sum+arr[i];
    }
    printf("%d \n",sum);
    return 0;
}   