#include<stdio.h>
int main()
{
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}},b[3][3]={{9,8,7},{6,5,4},{3,2,1}},result[3][3]={0},i,j,k;
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            for (k=0;k<3;k++){
                result[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printf("MATRIX A*B=:\n");
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            printf("%d\t",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}