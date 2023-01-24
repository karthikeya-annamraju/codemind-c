#include<stdio.h>
#include<math.h>
int main()
{
    int arr[1000];
    int i,n,c=0,count=0;
    int evenSum=0,oddSum=0;
    scanf("%d",&n);
    for (i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
     for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            if(arr[i]%2!=0)
            {
                c++;
            }
        }
        else
        {
            if(arr[i]%2==0)
            {
                count++;
            }
        }
    }
    if(count==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}