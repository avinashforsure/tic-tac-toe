#include<stdio.h>
void main(){
    int x=4;
    int *ptr;
    *ptr=8;
    printf("%d",x);
    printf("%d",*ptr);
}