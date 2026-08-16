#include <stdio.h>

int main()
{
    int rows, columns;
    int first[10][10], second[10][10], sum[10][10];
    int i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &columns);

    if (rows <= 0 || rows > 10 || columns <= 0 || columns > 10)
    {
        printf("Invalid matrix size. Use values from 1 to 10.\n");
        return 0;
    }

    printf("Enter elements of first matrix:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            scanf("%d", &first[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            scanf("%d", &second[i][j]);
        }
    }

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            sum[i][j] = first[i][j] + second[i][j];
        }
    }

    printf("Sum of matrices:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("%d ", sum[i][j]);
        }

        printf("\n");
    }

    return 0;
}
