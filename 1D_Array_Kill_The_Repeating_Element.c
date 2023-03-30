#include<stdio.h>
int main(){
    int n,count;
    scanf("%d",&n);
    int a[n],kill[100];
    for (int i=0;n>i;i++){
        scanf("%d",&a[i]);
        kill[i]=-1;
    }
    for (int i=0;n>i;i++){
        count = 1;
        for (int j=i+1;n>j;j++){
            if (a[i]==a[j]){
                count++;
                kill[j]=0;
            }
        }
    if (kill[i]!=0){
        kill[i]=count;
    }
    }
    for (int i=0;n>i;i++){
        if (kill[i]!=0){
            printf("%d ",a[i]);
        }
    }    
    
}