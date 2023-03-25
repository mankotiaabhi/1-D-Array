#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;n>i;i++){
         scanf("%d",&a[i]);
    }
    printf("Ist array\n");     
    for (int i=0;n>i;i++){
         printf("%d ",a[i]);
    }
    printf("\n");
    printf("2nd Array\n");

    for (int i=0;n>i;i++){
         printf("%d ",a[i]*a[i]);
    }
       
}

