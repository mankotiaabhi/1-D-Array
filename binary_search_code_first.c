#include<stdio.h>
int binarysearch(int *a,int n,int element){
    int high=n-1;
    int low=0;
    
    for (int i=0;n>i;i++){
        int mid=(high+low)/2;
        if (a[mid]==element){
           return mid;
        }
        if (a[mid]<element){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
        }
    return -1;
    }
    
    

    
int main(){
    int a[]= {1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(a)/sizeof(int),element=2;
    int search = binarysearch(a,n,element);
     printf("%d",search);

}