#include<stdio.h>

int main(){
    int n,k,j;
    printf("Array length : ");
    scanf("%d",&n);
    int arr[n];
    printf("Array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Integer : ");
    scanf("%d",&k);
    for(int i=0; i<n; i++){
        if(arr[i]==k){
            j=i;
            break;
        }
    }
    printf("Index of %d in the Array is %d\n",k,j);
    return 0;


    


}