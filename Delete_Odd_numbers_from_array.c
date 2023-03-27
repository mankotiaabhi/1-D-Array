#include<stdio.h>
int main(){
   int a[]={3,4,5,12,54,34,23,65,89},even_numbers=0;
    int n=sizeof(a)/sizeof(int);
    for (int i=0;n>i;i++){
        if (a[i]%2!=0){
            even_numbers=even_numbers+1;
        }
    }
    int b[n-even_numbers];
    for (int i=0;n>i;i++){
        if (a[i]%2==0){
            printf("%d ",a[i]);
        }
    }

}