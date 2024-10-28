//문자열
#include<stdio.h>

int main(){
    int a;
    scanf("%d", &a);

    int startlen=0, len=0;
    char word[1000];
    for(int i=0; i<a; i++){
        len=0;
        scanf("%s", word);

        while (word[len]!=0){
            len++;
        }

        printf("%c%c\n", word[startlen], word[len-1]);
    }
}