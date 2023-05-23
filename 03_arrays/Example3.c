//
// Created by sugarglider on 14/5/23.
// static array in stack and heap memory in clang.
//
#include<stdio.h>
#include<stdlib.h>

void main(){
    int a[5] = {2,4,6,8};
    int *p;

    p = (int*)malloc(5*sizeof(int));
    p[0] = 3;
    p[1] = 5;
    p[2] = 7;
    p[3] = 9;

    int i;
    for(i=0;i<4;i++){
        printf("%d ",a[i]);
    }

    printf("\n");

    for(i=0;i<4;i++){
        printf("%d ",p[i]);
    }

    free(p);
}
