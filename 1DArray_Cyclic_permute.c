#include<stdio.h>
int main(){
    int a[]={4, 5, 6, 7, 8, 10, 11, 34, 56, 1} ;
    int n=sizeof(a)/sizeof(int);
    int element=a[0];
    for (int i=0;n>i;i++){
        a[i]=a[i+1];
    }

    for (int i=0;n>i;i++){
        a[n-1]=element;
        printf("%d ",a[i]);
    }
}