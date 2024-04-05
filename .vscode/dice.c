#include<stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    if(a=b=c){
        printf('%d', 10000+a*1000);
    }else if(a==b ||a==c ||b==c){
        printf('%d', 10000+a*1000);
    }else{
        printf('%d', 10000+a*1000);
    }
}