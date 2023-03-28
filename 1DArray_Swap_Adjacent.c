#include<stdio.h>
int main(){
    int a[]={10,20,30,40,50,60,70,80,90,100};
    int n=sizeof(a)/sizeof(int);
    for (int i=0;n>i;i++){
    int temp=a[i+1];
    a[i+1]=a[i];
    a[i]=temp;
    i++;
    }
    for (int i=0;n>i;i++){
        printf("%d ",a[i]);
    }
}