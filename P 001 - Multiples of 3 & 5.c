#include<stdio.h>
int main()
{
    int a[1000],b=0,c=0;

    for(int i=1; i<1000; i++)
    {
        if(i%3==0 || i%5==0)
        {
            a[b]=i;
            b+=1;
        }
    }
    for(int i=0; i<b; i++)
    {
        c+=a[i];
    }
    printf("%d",c);
}

