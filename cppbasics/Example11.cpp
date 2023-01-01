#include<iostream>
using namespace std;


void func(int *A, int n){
    for(int i=0;i<n;i++){
        cout << A[i] << " ";
    }
}

int main(){
    int A[] = {2,4,6,8,10};
    int n = sizeof(A)/sizeof(int);

    for(int element:A){
        cout << element << " ";
    }

    cout << endl;

    func(A,n);
    cout<<endl;
    return 0;
}