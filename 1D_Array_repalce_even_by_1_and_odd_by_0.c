#include<stdio.h>
/*

*/
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;n>i;i++){
        scanf("%d",&a[i]);
    }
    for (int i=0;n>i;i++){
        if (a[i]%2==0){
            a[i]=1;
        }
        else{
            a[i]=0;
        }
        printf("%d ",a[i]);
    }
}