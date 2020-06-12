#include <stdio.h>

int main(void){
    int a=1,i,m=1;
    long int k=1;
    while(1){
        for(i=1;i<m;i++){
            k=k*m;
        }
        if(k<2147483647)
            a=k;
        else
            break;
        printf("%d\n",a);
        m++;
        k=m;
    }
}