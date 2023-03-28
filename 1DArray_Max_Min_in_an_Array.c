#include<stdio.h>
int isprime(int n){
    for (int i=2;n>=i*i;i++){
        if (n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(a)/sizeof(int);
    for (int i=0;n>i;i++){
            for (int j=0;n>j;j++){
                if (a[j]>a[j+1]){
                    int temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
    int max=a[n-1];
    int min=a[0];
    printf("Maximum Element in this Array is %d\n",max);
    printf("Minimum Element in this Array is %d\n",min);
}
