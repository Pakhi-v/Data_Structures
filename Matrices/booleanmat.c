//Given a boolean matrix mat[M][N] of size M X N, modify it such that if a matrix cell mat[i][j] is 1 (or true) then make all the cells of ith row and jth column as 1

#include <stdbool.h>
#include <stdio.h>
#define R 3
#define C 4
void modifyMatrix(bool mat[R][C])
{
    bool row[R];
    bool col[C];
    int i, j;
    /* Initialize all values of row[] as 0 */
    for (i = 0; i < R; i++)
        row[i] = 0;
    /* Initialize all values of col[] as 0 */
    for (i = 0; i < C; i++)
        col[i] = 0;
    // Store the rows and columns to be marked as
    // 1 in row[] and col[] arrays respectively
    for (i = 0; i < R; i++) {
        for (j = 0; j < C; j++) {
            if (mat[i][j] == 1) {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    for (i = 0; i < R; i++)
        for (j = 0; j < C; j++)
            if (row[i] == 1 || col[j] == 1)
                mat[i][j] = 1;
}
void printMatrix(bool mat[R][C])
{
    int i, j;
    for (i = 0; i < R; i++) {
        for (j = 0; j < C; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
}
int main()
{
    bool mat[R][C] = { { 1, 0, 0, 1 },
                       { 0, 0, 1, 0 },
                       { 0, 0, 0, 0 } };
 
    printf("Input Matrix \n");
    printMatrix(mat);
    modifyMatrix(mat);
    printf("Matrix after modification \n");
    printMatrix(mat);
    return 0;
}