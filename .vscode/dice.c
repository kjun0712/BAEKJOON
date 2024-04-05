#include<stdio.h>

int main(){
    int a,b,c;
    int max;
    scanf("%d %d %d",&a,&b,&c);

    if(a=b=c){
        printf('%d', 10000+a*1000);
    }else if(a==b ||a==c ||b==c){
        if(a==c){
            printf('%d', 10000+a*1000);
        }else if(a==b){
            printf('%d', 1000+a*100);
        }else{
            printf('%d', 1000+b*100);
        }
    }else{
        if(max<b){
            max=b;
        }else if(max<c){
            max=c;
        }else{
            max=a;
        }
        printf('%d', max*100);
    }
}