#include <stdio.h>
int main(){
    int n,s=0,r;
    printf("enter any number:");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        s=r+(s*10);
        n=n/10;
    }
    if (n=s)
    printf("palindrome number");
else
printf("not");
return 0;
    
}