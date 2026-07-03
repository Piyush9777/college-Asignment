#include<stdio.h>
int main(){
    int n,i;
    printf("enter number:");
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        while(n%i==0){
            n=n/i;
        }
    }
    printf("largest prime factor=%d",i-1);
    return 0;
}