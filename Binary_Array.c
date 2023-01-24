#include<stdio.h>
int main()
{
    int arr[100],sum=0;
    int i,n,c=0,count=0;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if (arr[i]==0 or arr[i]==1) {
            c++;
        }
        else {
            count++;
        }
    }
    if (count==0) printf("True");
    else printf("False");
}