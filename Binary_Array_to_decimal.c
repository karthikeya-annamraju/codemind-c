#include<stdio.h>
int main()
{
    int arr[100];
    int n,i,rem,dec=0,b=0,base=1;
    scanf("%d",&n);
    for (i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
         b=(b*10)+arr[i];
    }
    while (b!=0) {
        rem=b%10;
        dec=dec+rem*base;
        b/=10;
        base=base*2;
    }
    printf("%d",dec);
}