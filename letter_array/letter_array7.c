//문자열 반복
#include<stdio.h>

int main(){
    int num=0;
    scanf("%d", &num);

    int loop, len;
    char word[20];
    for (int i=0; i<num; i++){
        len=0;
        scanf("%d %s", &loop, word);
        while (word[len]!=0){
            len++;
        }
        
        for(int k=0; k<len; k++){
            for (int t=0; t<loop; t++){
                printf("%c", word[k]);
            }
        }
        printf("\n");
    }
}