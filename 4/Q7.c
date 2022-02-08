#include<stdio.h>

int main(){
    int a=0,b=1;
    printf("Fibbonaci sequence : %d %d",a,b);
    for(int i=0;i<8;i++){
        b=b+a;
        a=b-a;
        printf(" %d",b);
        

    }
    printf("\n");
    return 0;

}