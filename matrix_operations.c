#include <stdio.h>

void addition(int a[10][10], int b[10][10], int r, int c)
{
    int sum[10][10];

    printf("\nMatrix Addition:\n");

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}

void multiplication(int a[10][10], int b[10][10], int r, int c)
{
    int product[10][10];

    printf("\nMatrix Multiplication:\n");

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            product[i][j] = 0;

            for(int k = 0; k < c; k++)
            {
                product[i][j] += a[i][k] * b[k][j];
            }

            printf("%d ", product[i][j]);
        }
        printf("\n");
    }
}

void transpose(int a[10][10], int r, int c)
{
    printf("\nTranspose of Matrix A:\n");

    for(int i = 0; i < c; i++)
    {
        for(int j = 0; j < r; j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
}

int main()
{
    int a[10][10], b[10][10];
    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("\nEnter elements of Matrix A:\n");

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter elements of Matrix B:\n");

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    addition(a, b, rows, cols);
    multiplication(a, b, rows, cols);
    transpose(a, rows, cols);

    return 0;
}