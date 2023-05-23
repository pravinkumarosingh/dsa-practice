/**
 * 2D array example
 */

#include <iostream>
using namespace std;

int main()
{
    // traditional method
    int A[2][2];

    A[0][0] = 1;
    A[0][1] = 2;

    cout << "A[0][0] ->"
         << A[0][0] << endl;

    // pointer method -> partial heap
    int *B[2];
    B[0] = new int[2];
    B[1] = new int[2];

    B[0][0] = 1;
    B[0][1] = 2;

    cout << "B[0][0] ->"
         << B[0][0] << endl;

    // double pointer method -> full heap
    int **C;
    C = new int *[2];
    C[0] = new int[2];
    C[1] = new int[2];

    C[0][0] = 1;
    C[0][1] = 2;

    cout << "C[0][0] ->"
         << C[0][0] << endl;
}