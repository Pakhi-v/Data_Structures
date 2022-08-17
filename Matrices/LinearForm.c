//C Program to Represent Linear Equations in Matrix Form
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    char var[] = { 'x', 'y', 'z', 'w' };
    printf("Enter the number of variables in the equations: ");
    int n;
    scanf("%d", &n);
    printf("\nEnter the coefficients of each variable for each equations");
    printf("\nax + by + cz + ... = d");
    int mat[n][n];
    int constants[n][1];
    int i,j;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
        scanf("%d", &constants[i][0]);
    }
 
    printf("Matrix representation is: ");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf(" %f", mat[i][j]);
        }
        printf(" %f", var[i]);
        printf(" = %f", constants[i][0]);
        printf("\n");
    }
    return 0;
}