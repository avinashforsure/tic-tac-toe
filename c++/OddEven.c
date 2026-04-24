#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int c;
    c=n&1;
    if(c==1)
    printf("odd");
    else
    printf("even");

}