#include<stdio.h>

int main(){
    int a,b,c;
    int max;
    scanf("%d %d %d",&a,&b,&c);

    if(a==b&&b==c){
        printf("%d", 10000+a*1000);
    }else if(a==c&&c!=b){
        printf("%d", 1000+a*100);
    }else if(a==b&&a!=c){
        printf("%d", 1000+a*100);
    }else if(b==c&&c!=a){
        printf("%d", 1000+b*100);
    }else{
        if(c<a&&b<a){
            max=a;
        }else if(c<b&&a<b){
            max=b;
        }else{
            max=c;
        }
        printf("%d", max*100);
    }
}