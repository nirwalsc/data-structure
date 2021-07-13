#include <stdio.h>

int main()
{
    int matrix[10][10], t[10][10];
    int i, j, a, b;

    printf("Enter number of rows : ");
    scanf("%d", &a);
    printf("Enter number of columns : ");
    scanf("%d", &b);

    /* Input data in matrix */
    printf("\nEnter the elements of matrix\n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            printf("Enter values :");
            scanf("%d", &matrix[i][j]);
        }
    }

    /* Display the matrix */
    printf("\n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    /* Transpose of the matrix */
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            t[j][i] = matrix[i][j];
        }
    }

    printf("\nTranspose matrix\n");

    for (i = 0; i < b; i++)
    {
        for (j = 0; j < a; j++)
        {
            printf("%d\t", t[i][j]);
        }
        printf("\n");
    }

    return 0;
}