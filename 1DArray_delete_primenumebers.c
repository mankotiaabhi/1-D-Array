#include<stdio.h>
int isprime(int n){
    for (int i=2;n>=i*i;i++){
        if (n%i==0){
            return n;
        }
    }
    return 0;
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;n>i;i++){
        scanf("%d",&a[i]);
    }
    for (int i=0;n>i;i++){
        if (a[i]==1|a[i]==0){
            printf("%d ",a[i]);
        }
        else if (isprime(a[i])){
            printf("%d ",isprime(a[i]));
        }
    }

}