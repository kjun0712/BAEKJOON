//단어길이재기
#include<stdio.h>

int main(){
    char word[100];
    int len=0, i=0;

    scanf("%s", word);

    while (word[i]!=0){
        len++;
        i++;
    }
    printf("%d", len);
}