#include<stdio.h>

int main()
{
    int n=10;
    int arr[n]={23, 10, 34, 23, 90, 10, 34, 23, 56, 49};
    int min=arr[0],max=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]<min)
            min=arr[i];
        if(arr[i]>max)
            max=arr[i];
    }
    printf("min = %d\nmax = %d\n",min,max);
    return 0;
}   