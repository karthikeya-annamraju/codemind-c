#include<stdio.h>
#include<math.h>
int main()
{
    int intV,n;
    float floV;
    scanf("%d",&n);
    floV=(sqrt(n));
    intV=floV;
    if (intV==floV) {
        printf("True");
    }
    else {
        printf("False");
    }
}