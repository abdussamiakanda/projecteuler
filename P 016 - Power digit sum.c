#include<stdio.h>
int main()
{
    long long u=1;
    int a,res=0,b=1;

    for(int i=1; i<=1000; i++) //2 to the power 1000
    {
        u*=2;
        printf("%20d \n",u);
    }

    int r;

    for(int i=0;i<b;i++)  //separating digits and keeping in array for sum
    {
        r=u%10;
        u=u/10;
        res+=r;
    }


    return 0;
}
