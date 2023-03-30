#include<stdio.h>
int searching(int *a,int size,int element){
    for (int i=0;size>i;i++){
        if (a[i]==element){
            return i;
        }
       } 
       return -1; 
}

       

int main(){
    int a[]={2,4,6,2,1,65};
    int size=sizeof(a)/sizeof( int);
    int element=65;
    int binary=searching(a,size,element);
    printf("%d is found at index %d",element,binary);

}