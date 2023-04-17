#include<iostream>
using namespace std;

int main(){
    int a[5];                   //garbage value
    int b[5] = {2,4,6,8,10};    //assigned value
    int c[5] = {2,4};           //element 1 and element 2 initialised rest elements are 0.
    int d[5] = {0};             //all the elements are 0.
    int e[]  = {2,4,6,8,10,12}; //array of size 6.

    for (int i=0;i<5;i++){
        cout << a[i] << " ";
    }
    cout << endl;

    for (int i=0;i<5;i++){
        cout << b[i] << " ";
    }
    cout << endl;

    for (int i=0;i<5;i++){
        cout << c[i] << " ";
    }
    cout << endl;

    for (int i=0;i<5;i++){
        cout << d[i] << " ";
    }
    cout << endl;

    for (int i=0;i<6;i++){
        cout << e[i] << " ";
    }
    cout << endl;
}