#include<stdio.h>

int main(){
    int m,n,o;
    m=3;
    n=2;
    o=3;
    int m1[m][n]={{1,2},{3,4},{5,6}};
    int m2[n][o]={{1,2,3},{4,5,6}};
    /*       1 2
        m1 = 3 4  , m2 = 1 2 3 
             5 6         4 5 6        */
    int m1xm2[m][o];//product of matrices = m1xm2
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < o; j++)
        {
            m1xm2[i][j]=0;
            for(int k=0; k< n; k++){
                m1xm2[i][j] = m1xm2[i][j] +  m1[i][k]*m2[k][j];
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < o; j++)
        {
            printf("%d ",m1xm2[i][j]);
        }
        printf("\n");
    }
    return 0;
}
