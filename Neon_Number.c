#include<stdio.h>
int main()
{
    int n,sq,sum=0;
    scanf("%d",&n);
    sq=n*n;
    while (sq>0) {
        int rem=sq%10;
        sum=sum+rem;
        sq/=10;
    }
    if (n==sum) {
        printf("Neon Number");
    }
    else {
        printf("Not Neon Number");
    }
}