#include<stdio.h>

int main(){
    int a,b,c,p;
    int max;
    scanf("%d %d %d",&a,&b,&c);

    if(a==b==c){
        p=10000+a*1000;
        printf("%d", p);
    }else if(a==c!=b){
        p=1000+a*100;
        printf("%d", p);
    }else if(a==b!=c){
        p=1000+a*100;
        printf("%d", p);
    }else if(b==c!=a){
        printf("%d", 1000+b*100);
    }else{
        max=a;
        if(max<b){
            max=b;
        }else if(max<c){
            max=c;
        }else{
            max=a;
        }
        printf("%d", max*100);
    }
}