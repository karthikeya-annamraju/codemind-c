#include<stdio.h>
#include<math.h>
int main()
{
    int num;
    int a,b;
    scanf("%d",&num);
    int numLen=log10(num);
    int ld=num%10;
    int fd=num/pow(10,numLen);
    a=fd*pow(10,numLen);
    b=num%a;
    num=b/10;
    int swap=ld*(pow(10,numLen))+((num*10)+fd);
    printf("%d",swap);
}