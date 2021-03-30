#include<stdio.h>
int main()
{
    int sosq=0, sqos=0;

    for(int i=1; i<=100; i++)
    {
        sosq+=(i*i);
        sqos+=i;
    }

    printf("%d",((sqos*sqos)-sosq));
}
