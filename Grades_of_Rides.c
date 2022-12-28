#include<stdio.h>
int main()
{
    int hf,spnf,spdf;
    scanf("%d%d%d",&hf,&spnf,&spdf);
    if (hf>50 and spnf>60 and spdf>100)
    {
        printf("10");
    }
    else if (hf>50 and spnf>60) 
    {
        printf("9");
    }
    else if (spdf>100 and spnf>60) 
    {
        printf("8");
    }
    else if (hf>50 and spdf>100) 
    {
        printf("7");
    }
    else if (hf>50 || spnf>60 || spdf>100)
    {
        printf("6");
    }
    else 
    {
        printf("5");
    }
}