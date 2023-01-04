/**
 * @file Example15.cpp
 * @author your name (you@domain.com)
 * @brief This is a C++ version of previous Example15.c 
 * @version 0.1
 * @date 2023-01-04
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include<iostream>
using namespace std;

class Rectangle{
    private:
        int length;
        int breadth;

    public:
        Rectangle(int length, int breadth){
            this->length = length;
            this->breadth = breadth;
        }
    
        int area(){
            return this->length * this->breadth;
        }

        void changeLength(int length){
            this->length = length;
        }
};

int main(){
    Rectangle rect(10,5);
    printf("Area of rectangle is %d\n",rect.area());
    rect.changeLength(5);

    return 0;
}