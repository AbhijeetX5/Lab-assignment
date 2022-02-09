#include<stdio.h>

int main(){
    int n;
    printf("Array length : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int temp,i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[i]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    int c=1;
    for(int i=0; i<n-1; i++){
        if(arr[i]==arr[i+1]){
            c++;
        }
        else{
            printf("Frequency of %d is %d\n",arr[i],c);
            c=1;
        }
    }
    if(c==1)
        printf("Frequency of %d is %d\n",arr[n-1],c);
    return 0;
}
