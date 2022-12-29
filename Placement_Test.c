#include<stdio.h>
int main()
{
    int t,x,n,i,c;
    scanf("%d",&t);
    for (i=1;i<=t;i++) {
        scanf("%d %d",&x,&n);
        c=(x/10)*n;
        printf("%d
",c);
    }
}