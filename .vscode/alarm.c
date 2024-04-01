#include<stdio.h>

int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    if(b>=45&&b<=59&&0<=a<=23){
        printf("%d %d",a,b-45);
    }else if(b<45&&b>=0&&0<a<=23){
        printf("%d %d",a-1,b+15);
    }else if(b<45&&b>=0&&a==0){
        printf("%d %d",a+23,b+15);
    }
}