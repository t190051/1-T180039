#include <stdio.h>

long fac(long n){
    return (n==0)?1:n*fac(n-1);
}

int main(){
    long i=16;
    printf("%ld\n",fac(i));
}