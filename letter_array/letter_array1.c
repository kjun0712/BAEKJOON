//문자와 문자열
#include<stdio.h>

int main(){
    char S[1000];
    int i=0;
    scanf("%s", S);
    scanf("%d", &i);

    printf("%c", S[i-1]);
}