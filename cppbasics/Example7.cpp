/**
 * @file Example7.cpp
 * @author Pravin
 * @brief parameter passing method - call by value mechanism
 * @version 0.1
 * @date 2023-01-01
 * 
 * 
 */

#include<iostream>
using namespace std;


int add(int a, int b){
    return a+b;
}

int main(){
    int num1=10, num2=20;
    cout << add(num1,num2)<<endl;
    return 0;
}