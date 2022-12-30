#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    for (int i=1;i<=t;i++) {
        int n,len;
        scanf("%d",&n);
        len=log10(n)+1;
        int ld=n%10;
        int fd=n/pow(10,len-1);
        int sum=ld+fd;
        printf("%d
",sum);
    }
}