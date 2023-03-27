  #include<stdio.h>
  int main(){
    int a[]={10,15,20,25,30,35,40};
    int n=sizeof(a)/sizeof(int);
    int element,count=0;
    scanf("%d",&element);
    for (int i=0;n>i;i++){
        if (a[i]%element==0){
            count++;
        }
    }
    printf("%d",count);
  }