#include<stdio.h>
#include<stdlib.h>

#define MAX 10
int stack[MAX], topA = -1, topB = MAX;

void push_stackA(int val){
    if(topA == topB-1)
        printf("Stack Overflow.\n");
    else{
        topA += 1;
        stack[topA] = val;
    }
}
void push_stackB(int val)
{
    if(topB-1 == topA)
        
}