#include<iostream>
using namespace std;

int main(){
    int a[] = {2,4,6,8,10};

    //different ways of accessing array elements.
    printf("%d\n",a[2]);
    printf("%d\n",2[a]);
    printf("%d\n",*(a+2));

    return 0;
}