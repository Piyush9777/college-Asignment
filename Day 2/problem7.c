#include <stdio.h>
int main(){
    int n,pd=1,rem;
    printf("enter any number:");
    scanf("%d",&n);
    while(n!=0){
      rem=n%10;
      pd=pd*rem;
      n=n/10;  
    }
    printf("products of digits is %d",pd);
    return 0;
}