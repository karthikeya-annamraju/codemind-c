#include<stdio.h>
int main()
{
    int ar[100],i,n;
    int evec=0,oddc=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        if(ar[i]%2==0)
        {
            //printf("%d ",ar[i]);
            evec++;
        }
    }
    for(i=0;i<n;i++)
    {
        if(ar[i]%2!=0)
        {
            //printf("%d ",ar[i]);
            oddc++;
        }
    }
    printf("%d ",evec);
    printf("%d",oddc);
}