#include <stdio.h>
// Matrix multiplication
int main()
{
    int m1_row, m1_col, m2_row, m2_col;
    // Taking the dimensions and elements of 1st matrix
    printf("Enter the no. of rows and coloumns of 1st matrix: ");
    scanf("%d %d", &m1_row, &m1_col);
    int mtrx1[m1_row][m1_col];
    for (int i = 0; i < m1_row; i++)
    {
        for (int j = 0; j < m1_col; j++)
        {
            scanf("%d", &mtrx1[i][j]);
        }
    }
    // Taking the dimensions and elements of 2nd matrix
    printf("Enter the no. of rows and coloumns of 2nd matrix: ");
    scanf("%d %d", &m2_row, &m2_col);
    int mtrx2[m2_row][m2_col], mtrx3[m1_row][m2_col];
    for (int i = 0; i < m2_row; i++)
    {
        for (int j = 0; j < m2_col; j++)
        {
            scanf("%d", &mtrx2[i][j]);
        }
    }
    // Initialising the resultant matrix with zeros
    for (int i = 0; i < m1_row; i++)
    {
        for (int j = 0; j < m2_col; j++)
        {
            mtrx3[i][j] = 0;
        }
    }
    // Checking possibilty
    if (m1_col != m2_row)
    {
        printf("Matrix multiplication is not possible");
    }
    else
    {
        // Calculating multiplication
        for (int i = 0; i < m1_row; i++)
        {
            for (int j = 0; j < m2_col; j++)
            {
                for (int k = 0; k < m2_row; k++)
                {
                    mtrx3[i][j] += mtrx1[i][k] * mtrx2[k][j];
                }
                // printing the resultant matrix
                printf("%d\t", mtrx3[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}