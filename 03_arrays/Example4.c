/**
 * @file Example4.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-05-14
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include<stdio.h>
#include<stdlib.h>
void main(){
    int *p,*q;

    p = (int *)malloc(4*sizeof(int));
    p[0] = 3;
    p[1] = 5;
    p[2] = 7;
    p[3] = 9;

    q = (int *)malloc(8*sizeof(int));

    int i;
    for(i=0;i<4;i++){
        q[i] = p[i];
    }
    free(p);
    for(i=0;i<4;i++){
        printf("%d ",q[i]);
    }
    p = q;
    // q=null;

}