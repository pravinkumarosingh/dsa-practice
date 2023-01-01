#include<iostream>
using namespace std;


int *func(int size){
    int *ptr;

    ptr = (int *)malloc(sizeof(int));
    for(int i=0;i<size;i++){
        ptr[i] = i+1;
    }
    return ptr;
    delete ptr;
}

int main(){
    int *p;
    p=func(5);

    for(int i=0;i<5;i++){
        cout << p[i] << " ";
    }

    cout << endl;
}