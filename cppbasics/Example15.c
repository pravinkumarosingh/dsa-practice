#include<stdio.h>

struct Rectangle{
    int length;
    int breadth;
};

void initialize(struct Rectangle *r, int length, int breadth){
    r->length = length;
    r->breadth = breadth;
}

int area(struct Rectangle r){
    return r.length * r.breadth;
}

void changeLength(struct Rectangle *r, int length){
    r->length = length;
}

void main(){
    struct Rectangle r;
    initialize(&r,10,5);
    printf("Area of rectangle is %d\n",area(r));
    changeLength(&r,5);
}