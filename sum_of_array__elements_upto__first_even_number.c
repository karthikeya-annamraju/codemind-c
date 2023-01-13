#include<stdio.h>
int main()
{
	int arr[100],n;
	int sum=0;
	scanf("%d",&n);
	for (int i=0;i<n;i++) {
		scanf("%d",&arr[i]);
	}
	for (int i=0;i<n;i++) {
		if (arr[i]%2==0) {
			break;
		}
		else {
			sum=sum+arr[i];
		}
	}
	
	printf("%d",sum);
	
}