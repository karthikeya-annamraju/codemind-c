#include<stdio.h>
#include<math.h>
int main()
{
    double p,t,r;
    double ci;
    scanf("%lf%lf%lf",&p,&r,&t);
    ci=p*pow((1+(r/100.00)),t);
    printf("%.2lf ",ci);
}