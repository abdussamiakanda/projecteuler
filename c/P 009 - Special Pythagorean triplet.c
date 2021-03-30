#include<stdio.h>
int main()
{
    int a,b,c;

    for(int i=1; i<=1000; i++)
    {
        for(int j=1; j<=1000; j++)
        {
            for(int k=1; k<=1000; k++)
            {
                if( ((i*i)+(j*j))==(k*k) && i+j+k==1000)
                {
                    a=i;
                    b=j;
                    c=k;
                }
            }
        }
    }
    printf("%d",(a*b*c));
}
