#include<stdio.h>

int main(){
    int n=10;
    int arr[n]={23, 10, 34, 23, 90, 10, 34, 23, 56, 49};
    for(int temp,i=0; i<n; i++){       //sorting array in ascending order
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[i]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    int sum=0;
    float mean;
    for(int i=0; i<n; i++){
        sum=sum+arr[i];
    }
    mean=sum/n;                       //mean =
    float median;
    if(n%2==0){
        median=(arr[n/2]+arr[n/2-1])/2;
    }
    else
        median=arr[n/2];
    int c=1,maxfre=1,mode=arr[0];
    for(int i=0; i<n-1; i++){
        if(arr[i]==arr[i+1]){
            c++;
        }
        else{
            if(maxfre<c){
                maxfre=c;
                mode=arr[i];
            }
            c=1;
        }
    }
    printf("mode = %d\nmean = %.2f\nmedian = %.2f\n",mode,mean,median);
    return 0;
}