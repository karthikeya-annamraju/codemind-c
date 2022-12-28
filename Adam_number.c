#include<stdio.h>
int main()
{
    int n,sq,rem,rev=0,rem2,rev2=0,sq2;
    scanf("%d",&n);
    sq=n*n;
    while(n!=0) {
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }

    sq2=rev*rev;
    while (sq2!=0) {
        rem2=sq2%10;
        rev2=rev2*10+rem2;
        sq2/=10;
    }
    if(rev2==sq) printf("True");
    else printf("False");

}