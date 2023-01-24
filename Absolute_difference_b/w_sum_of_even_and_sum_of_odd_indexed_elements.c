#include<stdio.h>
#include<math.h>
int main()
{
    int arr[1000];
    int i,n;
    int evenSum=0,oddSum=0;
    scanf("%d",&n);
    for (i=0;i<n;i++) {
        scanf("%d",&arr[i]);
        if (i%2==0) {
            evenSum=evenSum+arr[i];
        }
        else {
            oddSum=oddSum+arr[i];
        }
    }
    int x;
    if (oddSum<evenSum) {
        x=(evenSum-oddSum);
    }
    else {
        x=(oddSum-evenSum);
    }
    printf("%d",x);
}