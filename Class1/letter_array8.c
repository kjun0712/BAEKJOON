//단어의 개수
#include<stdio.h>

int main(){
    char word[1000000];
    scanf("%s", word);

    int len=0;
    while(word[len]!=0){
        len++;
    }

    int num=0;
    for (int i=0; i<1000000; i++){
        if(i!=0 && word[i-1]!=0 && word[i]==0){
            num++;
        }
    }

    printf("%d", len);
}