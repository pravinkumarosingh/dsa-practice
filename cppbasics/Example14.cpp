/**
 * @file Example14.cpp
 * @author your name (you@domain.com)
 * @brief creating structure object in heap memory using pointer and using it in the main function 
 * @version 0.1
 * @date 2023-01-04
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



struct Rectangle *func(){
    struct Rectangle *p;
    p = new Rectangle();
    p->length = 15;
    p->breadth = 7;
    
    return p;
}

int main(){
    struct Rectangle *ptr = func();

    printf("Length %d\nBreadth %d\n",ptr->length,ptr->breadth);

    delete ptr;

    return 0;


}