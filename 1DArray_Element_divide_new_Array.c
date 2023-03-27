#include<stdio.h>
int main(){
    int a[]={5,10,15,20,25,30};
    int n=sizeof(a)/sizeof(int);
    int element=10,count=0;
    for (int i=0;n>i;i++){
        if (a[i]%element){
            printf("%d ",a[i]);
        }
    }
}
