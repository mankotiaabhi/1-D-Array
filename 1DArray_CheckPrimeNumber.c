/*
Input:
    Array elements are: 
    100, 200, 31, 13, 97, 10, 20, 11

    Output:
    100 - Not Prime
    200 - Not Prime
     31 - Prime
     13 - Prime
     97 - Prime
     10 - Not Prime
     20 - Not Prime
     11 - Prime
*/
#include<stdio.h>
int isprime(int n){
    for (int i=2;i*i<=n;i++){
        if (n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int a[]={100, 200, 31, 13, 97, 10, 20, 11};
    int n=sizeof(a)/sizeof(int);
    int res;
    for (int i=0;n>i;i++){
        printf("%d - ",a[i]);
        if (a[i]>1){
        if (isprime(a[i])==1){
            printf("Prime");
        }
        else {
            printf("Not Prime");
        }
        printf("\n");
        }
        else{
            printf("Not Prime\n");
        }
        
        

    }
    }
