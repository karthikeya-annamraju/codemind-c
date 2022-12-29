#include<stdio.h>
int main()
{
    int n,i,k1=3,k2=-2;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        if(i%2==0) 
        {
            printf("%d ",k1);
            k1=(k1*3)-4;
        }
        else 
        {
            printf("%d ",k2);
            k2=(k2*5)+12;
        }
    }
}