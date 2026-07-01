#include <stdio.h>

int main() {
    int A[3][2],B[2][3],C[3][3];
    int i,j,k;
    printf("Enter elements of 3x2 matrix:\n");
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter elements of 2x3 matrix:\n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            scanf("%d",&B[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            C[i][j]=0;
            for(k=0;k<2;k++){
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
    printf("\nResultant 3x3 Matrix:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }
}