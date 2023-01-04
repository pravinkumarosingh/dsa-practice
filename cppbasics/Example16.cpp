#include<iostream>
using namespace std;

class Rectangle{
    private:
        int length;
        int breadth;
    public:
        Rectangle(){int length=breadth=1;}

        Rectangle(int l , int b);
        int area();
        int perimeter();
};

Rectangle::Rectangle(int l, int b){
    this->length=l;
    this->breadth=b;
}

int Rectangle::area(){
    return this->length * this->breadth;
}

int Rectangle::perimeter(){
    return 2*(this->length+this->breadth);
}

int main(){
    Rectangle rect(10,5);
    printf("area of rectangle is %d\n",rect.area());
    printf("perimeter of rectangle is %d\n",rect.perimeter());
    return 0;
}