#include<stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d", &a, &b, &c);
    b+=c;
    if(b>=60){
        b-=60;
        a++;
        if(a>=0) a-=24;
    }
    printf("%d %d",a, b);
}