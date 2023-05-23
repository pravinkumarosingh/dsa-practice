//
// Created by sugarglider on 18/4/23.
// static array in stack and heap memory in cpp
//
#include<iostream>
using namespace std;

int main(){
    int a[5] = {2,4,6,8};

    int *p;
    p=new int[5];
    p[0] = 3;
    p[1] = 5;
    p[2] = 7;
    p[3] = 9;

    int i;
    for(i=0;i<4;i++){
        cout << a[i] << " ";
    }

    cout << "\n";

    for(i=0;i<4;i++){
         cout << p[i] << " ";
    }


    delete []p;
    return 0;
}