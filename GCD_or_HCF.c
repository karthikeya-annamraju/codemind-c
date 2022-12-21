#include<stdio.h>
int main()
{
    int n,m,gcd,i;
    scanf("%d%d",&n,&m);
    for (i=1;i<=n && i<=m;i++) {
        if (n%i==0 and m%i==0) {
            gcd=i;
        }
    }
    printf("%d",gcd);
}