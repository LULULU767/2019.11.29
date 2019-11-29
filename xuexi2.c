#include<stdio.h>
int isPrime(int x)
{
     return 1;
}
int main ()
{
    int i,n;
    printf("Enter n:",n);
    scanf("%d",&n);
    if(n>2){
    for(i=2;i<n;i++){
        if(isPrime(i)==1){
        printf("yes\n",isPrime(n));
        }
        return 0;
    }
    }
    if(n=2){
        printf("yes\n",isPrime(n));
        return 0;
    }
}