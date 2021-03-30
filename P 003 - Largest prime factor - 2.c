#include<stdio.h>
int isPrime(long long int val)
{
    int result=1;
    for(long long int i=2; i<=val/2; i++){
        if(val%i==0){
            result=0;
            break;
        }
    }
    return result;
}

int main(){
    long long int num, pf, lpf=3;
    num = 600851475143;

    for(pf=3; pf<=num; pf+=2){
        if(isPrime(pf)==1 && num%pf==0){
            num/=pf;
            lpf=pf;
        }

    }
    printf("Largest Prime Factor: %d", lpf);
    return 0;
}
