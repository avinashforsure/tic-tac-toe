#include<stdio.h>
int main( ) 
{ 
  int a; 
       int arr[5]={30,50,10}; 
       int *ptr; 
    ptr = &arr[0] + 1; 
    a = *ptr;
   (*ptr)++; 
   ptr++; 
   printf("%d\n",a) ;
   printf("%d\n",a + (*ptr) + arr[1]); 
    return 0; 
}