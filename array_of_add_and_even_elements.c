#include<stdio.h>
int main()
{
    int ar[100],i,n;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        if(ar[i]%2!=0)
        {
            printf("%d ",ar[i]);
        }
    }
    
    for(i=0;i<n;i++)
    {
        if(ar[i]%2==0)
        {
            printf("%d ",ar[i]);
        }
    }
}