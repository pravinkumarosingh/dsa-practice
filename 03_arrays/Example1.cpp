#include<iostream>
using namespace std;

int main(){
    int a[5];
    int b[5] = {2,4,6,8,10};
    int c[5] = {2,4};
    int d[5] = {0};
    int e[]  = {2,4,6,8,10,12};

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