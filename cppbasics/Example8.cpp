/**
 * @file Example8.cpp
 * @author Pravin
 * @brief parameter passing method - call by address mechanism
 * @version 0.1
 * @date 2023-01-01
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include<iostream>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;

}

int main(){
    int num1=10, num2=20;
    cout << "num1 = " << num1 << " " << "num2 = " << num2 << endl;
    swap(&num1,&num2);
    cout << "num1 = " << num1 << " " << "num2 = " << num2 << endl;
    return 0;
}