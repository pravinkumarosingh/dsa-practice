/**
 * @file Example16.cpp
 * @author your name (you@domain.com)
 * @brief template class
 * @version 0.1
 * @date 2023-01-04
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include<iostream>
using namespace std;

template<class T>
class Arithmetic{
    private:
        T a;
        T b;
    public:
        Arithmetic(){
            T a = b = 0;
        }
        Arithmetic(T a, T b);
        T add();
        T sub();
};

template<class T>
Arithmetic<T>::Arithmetic(T a, T b){
    this->a = a;
    this->b = b;
}

template<class T>
T Arithmetic<T>::add(){
    return a + b;
}

template<class T>
T Arithmetic<T>::sub(){
    return a - b;
}

int main(){
    Arithmetic<int> ar(10,5);
    printf("Addition is %d\n",ar.add());

    Arithmetic<float> ar1(10.1, 4.9);
    printf("Addition is %f\n",ar1.add());

    return 0; 
}