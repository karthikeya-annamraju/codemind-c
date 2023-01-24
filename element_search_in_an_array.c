#include<stdio.h>
int main()
{
    int arr[100],sum=0;
    int i,n,result,x;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    scanf("%d",&x);
    for (i=0;i<n;i++) {
        if (arr[i]==x) {
            result=1;
            break;
        }
    }
    if (result==1) {
            printf("True");
        }
        else {
            printf("False");
        }
}