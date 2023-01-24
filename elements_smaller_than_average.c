#include<stdio.h>
int main()
{
    int arr[100],sum=0;
    int i,n,c=0;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    int avg=sum/n;
    for (i=0;i<n;i++) {
        if (arr[i]<=avg) {
            c++;
        }
    }
    printf("%d",c);
}