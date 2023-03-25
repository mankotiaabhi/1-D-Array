#include<stdio.h>
int main(){
    int a[]={8,8,8,2,3,3,4,4,8,4},count=0;
    int n=sizeof(a)/sizeof(int),b[100];
    for (int i=0;n>i;i++){
            b[i]=a[i];
        }
    for (int i=0;n>i;i++){
        for (int j=0;n>j;j++){
        if (a[i]==b[j]){
            count=count+1;
            printf("%d ",count);
        }
        }
         }
         
}