#include<stdio.h>
int insertion(int *a,int size,int index){
    
            for (int i=index;i<=size;i++){
               a[i]=a[i+1];
               }
            

        }
 
int printarray(int *a,int size){
    for (int i=0;size>i;i++){
    printf("%d ",a[i]);}    
}
int main(){
    int a[100]={3,4,5,6,67,7};
    int capacity=100, index=0,size=6;
    size=size-1;

    
    insertion(a,size,index);
    printarray(a,size);
}