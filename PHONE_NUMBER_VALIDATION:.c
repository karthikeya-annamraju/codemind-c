#include<stdio.h>
int main()
{
    long long num;
    scanf("%lld",&num);
    
    //logic...
    if(num<10000000000 && num>999999999) {
    printf("Valid");
    }
    else {
    printf("Invalid");
    }
}