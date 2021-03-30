#include<stdio.h>
int leapyear(int yr);
int main()
{
    int day=0,sun=0;

    for(int i=1901; i<=2000; i++)
    {
        if(leapyear(i)==1)
        {
            for(int j=1;j<=12;j++)
            {
                if(j==2)
                {
                    for(int k=1;k<=29;k++)
                    {
                        day++;
                        if(k==1 && day%7==0)
                        {
                            sun++;
                        }
                    }
                }
                else if(j==4 || j==6 || j==9 || j==11)
                {
                    for(int k=1;k<=30;k++)
                    {
                        day++;
                        if(k==1 && day%7==0)
                        {
                            sun++;
                        }
                    }
                }
                else{
                    for(int k=1;k<=31;k++)
                    {
                        day++;
                        if(k==1 && day%7==0)
                        {
                            sun++;
                        }
                    }
                }
            }
        }
        else{
            for(int j=1;j<=12;j++)
            {
                if(j==2)
                {
                    for(int k=1;k<=28;k++)
                    {
                        day++;
                        if(k==1 && day%7==0)
                        {
                            sun++;
                        }
                    }
                }
                else if(j==4 || j==6 || j==9 || j==11)
                {
                    for(int k=1;k<=30;k++)
                    {
                        day++;
                        if(k==1 && day%7==0)
                        {
                            sun++;
                        }
                    }
                }
                else{
                    for(int k=1;k<=31;k++)
                    {
                        day++;
                        if(k==1 && day%7==0)
                        {
                            sun++;
                        }
                    }
                }
            }
        }
    }

    printf("%d ", sun);
}
int leapyear(int yr)
{
    int c;

    if(yr%400 == 0 || yr%100 != 0 && yr%4 == 0){
        c=1;
    }
    else{
        c=0;
    }
    return c;
}
