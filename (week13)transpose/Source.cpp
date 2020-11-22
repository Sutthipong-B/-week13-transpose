#include <stdio.h>

#define ROWS 3
#define COLS 3

void inputMat(int(*mat)[COLS]);
void printMat(int(*mat)[COLS]);
void printTransposed(int(*mat)[COLS]);

int main()
{
    int mat[ROWS][COLS];
    inputMat(mat);
    printMat(mat);
    printTransposed(mat);
    return 0;
}

void inputMat(int(*mat)[COLS])
{
    int i, j;
    printf("Enter elements in matrix: \n");
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            scanf_s("%d", (*(mat + i) + j));
        }
    }
}

void printMat(int(*mat)[COLS])
{
    int i, j;
    printf("Normal matrix: \n");
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            printf("%d ", *(*(mat + i) + j));
        }
        printf("\n");
    }
}

void printTransposed(int(*mat)[COLS])
{
    int i, j;
    printf("Transposed matrix: \n");
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            printf("%d ", *(*(mat + j) + i));
        }
        printf("\n");
    }
}