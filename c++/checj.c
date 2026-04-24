#include<stdio.h>
//void prime(int a);
void main(){
    int n1=15;
    int f=0;
    for(int i=1;i<=n1;i++){
        int a=i;
        int b=n1-i;
        int c=prime(a);
        int d=prime(b);
        if((c+d)==2)
        {
            f=1;
        break;
    }
   


    }
    if(f==1)
    printf("prime of 2");
    else 
    printf("not prime of 2");


}
int prime(int a){
    int s=0;
    for(int i=1;i<=a;i++)
    {
        if(a%i==0)
        s+=1;
    }
    if(s==2)
    return 1;
    else return 0;

}