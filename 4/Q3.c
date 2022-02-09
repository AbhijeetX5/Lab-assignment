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
