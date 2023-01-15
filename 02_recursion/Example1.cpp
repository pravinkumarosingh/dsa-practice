/**
 * @file Example1.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-01-12
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<iostream>
using namespace std;

void func1(int n){
    if(n>0){
        printf("%d ",n);
        func1(n-1);
    }
}

void func2(int n){
    if(n>0){
        func2(n-1);
        printf("%d ",n);
    }
}

int main(){
    cout << "Func1 ";func1(3);
    cout << "\n";
    cout << "Func2 ";func2(3);
    return 0;
}
