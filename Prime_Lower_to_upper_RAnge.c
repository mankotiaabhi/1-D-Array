 #include<stdio.h>
 int isprime(int n){
    for (int i=2;i*i<=n;i++){
        if (n%i==0)
        return 0;
    }
    return 1;
 }
 int main(){
    int n1,n2;
    printf("Enter lower limit :\n");
    scanf("%d",&n1);
    printf("Enter last limit :\n");
    scanf("%d",&n2);
    for (int i = 2; i < n2; i++)
    {
        if (isprime(i)){
            printf("%d ",i);
        }
         
    }
    
    }