#include<stdio.h>
int main(){
    int a[]={3,2,1,4,6},temp;
    int n=sizeof(a)/sizeof(int);
    printf("Array before sorting\n");
    for (int i=0;n>i;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    for (int i=0;n>i;i++){
        for (int j=0;n>j;j++){
             if (a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
             }
        }
    }
    printf("Array after sorting\n");
    for (int i=0;n>i;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    float median=a[n/2];
    printf("Median of given array is %f",median);
}