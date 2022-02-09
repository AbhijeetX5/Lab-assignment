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
    int even=0;
    for(int i=0; i<n; i++){
        if(arr[i]%2==0)
            even++;
    }
    
    int Even[even],Odd[n-even];
    for(int i=0,e=0,o=0; i<n; i++){
        if(arr[i]%2==0){
            Even[e]=arr[i];
            e++;
        }
        else{
            Odd[o]=arr[i];
            o++;
        }
        
    }
    printf("Even numbers in the array are : ");
    for(int i=0; i<even; i++){
        printf("%d ",Even[i]);
    }
    printf("\nOdd numbers in the array are : ");
    for(int i=0; i<n-even; i++){
        printf("%d ",Odd[i]);
    }
    printf{"\n"}    
    return 0;
}   
