#include<stdio.h>
int main()
{
    int first=1,second=2,c=0,sum=0,temp;

    for (int i=0; first<4000000; i++)
    {
        if(first%2==0)
        {
            sum+=first;
        }
        temp= first + second;
        first=second;
        second = temp;
    }
    printf("%d",sum);
}
