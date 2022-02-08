#include<stdio.h>

int main(){
    int n=10;
    int arr[n]={23, 10, 34, 23, 90, 10, 34, 23, 56, 49};
    for(int temp,i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[i]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("Array in ascending order : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
    return 0;
}