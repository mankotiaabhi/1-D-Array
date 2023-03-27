#include<stdio.h>
int main(){
    int a[4]={1,2,3,4};
    int size1=sizeof(a)/sizeof(int);
    int b[4]={5,6,7,8};
    int size2=sizeof(b)/sizeof(int);
    int size3=size1+size2;
    int c[size3];
    for (int i=0;size1>i;i++){
        a[size1+i]=b[i];
    }
    for (int i=0;size3+1>i;i++){
        printf("%d ",a[i]);
    }

    
    
  }
    
