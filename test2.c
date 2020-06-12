#include<stdio.h>

int eee(int a){
    return a/2;
}
int kkk(int a){
    return 3*a+1;
}

int main(void){
    int a=245845,n;
    printf("%d",a);
    while(1){
        if(a%2==1)
            a=kkk(a);
        else if(a%2==0)
            a=eee(a);
        printf("%d\n",a);
        if(a==1)
            break;
    }
}