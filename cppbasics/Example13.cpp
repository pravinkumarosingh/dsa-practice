/**
 * @file Example13.cpp
 * @author your name (you@domain.com)
 * @brief structure as a parameter
 * @version 0.1
 * @date 2023-01-01
 * 
 * @copyright Copyright (c) 2023
 * 
 */


#include<iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

int area(struct Rectangle r1){
    return r1.length * r1.breadth;
}

void changeLength(struct Rectangle *r1){
    r1 -> length = 5;
}

int main(){
    struct Rectangle r={10,5};
    cout << area(r) << endl;
    changeLength(&r);
    cout << r.length << endl;
    cout << area(r) << endl;
    return 0;
}