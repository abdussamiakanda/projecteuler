#include<stdio.h>
int main()
{
    int x=0,y=1;

    for(int i=100; i>0 ;i--)
    {
        y*=i; //y=y*i
    }

    printf("%d ",y);

    while(y/10>=1)
    {
        x+=(y%10);
        y/=10;
    }

    printf("%d",x);
    return 0;
}
