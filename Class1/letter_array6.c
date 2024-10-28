//알파벳 찾기
#include<stdio.h>

int main(){
    char word[100];
    scanf("%s", word);
    
    int len=0;
    while(word[len]!=0){
        len++;
    }
    
    int num[1000];
    for (int i = 0; i<1000; i++){
        num[i]=-1;
    }
    
    for(int i=0; i<len; i++){
        for(int t=97; t<=122; t++){
            if(word[i]==t && num[t]==-1){
                num[t]=i;
            }
        }
    }

    for(int t=97; t<=122; t++){
        printf("%d ", num[t]);
    }
}