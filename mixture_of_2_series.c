#include<stdio.h>
#include<math.h>
int main()
{
	int n,a,b,i,k1=0,k2=0;
	scanf("%d",&n);
	for(i=1;i<=n+1;i++)
	{
		if(i%2==0)
		{
			a=k1;
			printf("%d ",a);
			k1++;
		}
		else
		{
			b=(k2*2);
			printf("%d ",b);
			k2++;
		}
	}
}