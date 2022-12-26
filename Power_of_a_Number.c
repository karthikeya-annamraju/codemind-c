#include<stdio.h>
#include<math.h>
int main()
{
    long int x,y,m,res;
    scanf("%ld%ld%ld",&x,&y,&m);
    res=pow(x,y);
    printf("%ld",res%m);
}