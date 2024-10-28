//상수
#include<stdio.h>

int main(){
    int num1, num2;
    int a=0, b=0;
    scanf("%d %d", num1, num2);
    
    a=100*(num1%10)+10*(num1/10%10)+num1/100;
    b=100*(num2%10)+10*(num2/10%10)+num2/100;
    
    if(a>=b){
        printf("%d", a);
    }else{
        printf("%d", b);
    }
}