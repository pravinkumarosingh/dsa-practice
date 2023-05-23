#include <stdio.h>
#include <stdlib.h>

void main()
{
    int A[2][2];

    A[0][0] = 1;
    A[0][1] = 2;

    printf("A[0][0]->%d\n", A[0][0]);

    int *B[2];
    B[0] = (int *)malloc(sizeof(int) * 2);
    B[0] = (int *)malloc(sizeof(int) * 2);

    B[0][0] = 1;
    B[0][1] = 2;

    printf("B[0][0]->%d\n", B[0][0]);

    int **C;
    C = (int *)malloc(sizeof(int) * 2);
    C[0] = (int *)malloc(sizeof(int) * 2);
    C[1] = (int *)malloc(sizeof(int) * 2);

    C[0][0] = 1;
    C[0][1] = 2;

    printf("C[0][0]->%d\n", C[0][0]);
}