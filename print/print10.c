//곱셈
#include<stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d", &a, &b);

    printf("%d\n%d\n%d\n%d", a*(b%10), a*((b/10)%10), a*(b/100), a*b);
}