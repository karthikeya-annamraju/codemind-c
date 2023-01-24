#include<stdio.h>
int main()
{
    int arr[100],sum=0;
    int i,n;//sum=0
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if (i%2!=0) {
            sum=sum+arr[i];
        }
    }
    printf("%d",sum);
}