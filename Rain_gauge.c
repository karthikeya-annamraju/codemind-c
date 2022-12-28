#include<stdio.h>
int main()
{
    int n,x,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        scanf("%d
",&x);
        if (x<3) printf("LIGHT
");
        else if (x>=3 and x<7) printf("MODERATE
");
        else printf("HEAVY
");
    }
}