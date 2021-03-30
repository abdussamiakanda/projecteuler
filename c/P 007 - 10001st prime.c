#include<stdio.h>
int prime(int c);
int main()
{
    int u,pri[10001],e=-1;

    for(int i=2;e<=10001;i++)
    {
        if(prime(i)!=0 && e!=10001){
            e+=1;
            pri[e]=prime(i);
        }
        else if(e==10001)
        {
            break;
        }
        else{
            printf("");
        }
    }

    printf("The 10001th prime number is %d ",pri[e-1]);
    return 0;
}
int prime(int n)
{
    int c,b=0;

    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            b=1;
            break;
        }
        else{
            b=0;
        }
    }
    if(b==0)
    {
        c=n;

    }
    else{
        c=0;
    }
    return c;
}
